# update_readme.py

import re
import sys

def custom_sort_key(file_names):
    # Define the priority order of characters
    file_name = file_names.split('|')[-2].split('/')[1].strip(')')
    priority_order = {'#': 0, '$': 1, '.': 2, '_': 3}
    
    # Extract numeric and alphabetic parts
    parts = re.split(r'(\d+)', file_name)
    
    # Convert letters to lowercase for case-insensitive sorting
    parts = [p.lower() if not p.isdigit() else p for p in parts]
    
    # Apply priority order to characters
    parts = [(priority_order[c] if c in priority_order else c) for c in parts]
    
    return parts

def get_table_indices(readme_lines):
    start_index = next(i for i, line in enumerate(readme_lines) if re.match(r'\| Problem Name \|', line))
    end_index = next(i for i, line in enumerate(readme_lines[start_index+1:], start_index+1) if re.match(r'\| ----------  \|', line))
    print(start_index, end_index)
    return start_index, end_index

def parse_table(readme_lines, start_index, end_index):
    table = readme_lines[start_index:end_index+1]
    return table

def generate_table_entry(file):
    match = re.match(r'(\d+)([A-Z])\.(cpp|py)', file)
    problem_name_numeric = match.group(1)
    problem_name_alphabetic = match.group(2)
    problem_name = f"{problem_name_numeric}-{problem_name_alphabetic}"
    problem_link = f"http://codeforces.com/problemset/problem/{problem_name_numeric}/{problem_name_alphabetic}"
    solution_link = "{}(./{})".format("[C++]" if str(file).endswith("cpp") else "[Python]", file )
    return f"|{problem_name}|[{problem_name}]({problem_link})|{solution_link}|\n"

def update_readme(readme_path, new_files):
    with open(readme_path, 'r') as f:
        readme_lines = f.readlines()

    start_index, end_index = get_table_indices(readme_lines)
    existing_entries = parse_table(readme_lines, start_index+2, end_index-1)

    for file in new_files:
        new_entry = generate_table_entry(file)
        if new_entry not in existing_entries:
            existing_entries.append(new_entry)
    
    sorted_files = sorted(existing_entries, key=custom_sort_key)

    updated_readme_lines = readme_lines[:start_index+2] + sorted_files + readme_lines[end_index-1:]

    with open(readme_path, 'w') as f:
        f.writelines(updated_readme_lines)

if __name__ == "__main__":
    readme_path = "README.md"
    updated_files = sys.argv[1:]
    update_readme(readme_path, updated_files)
