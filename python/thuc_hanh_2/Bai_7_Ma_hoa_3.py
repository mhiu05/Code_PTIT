import sys

def get_val(c):
    return ord(c) - ord('A')

def get_char(v):
    return chr((v % 26) + ord('A'))

def rotate_string(s):
    rotation_sum = sum(get_val(c) for c in s)
    
    rotated_chars = []
    for c in s:
        old_val = get_val(c)
        new_val = (old_val + rotation_sum) % 26
        rotated_chars.append(get_char(new_val))
        
    return "".join(rotated_chars)

def merge_strings(s1, s2):

    merged_chars = []
    for i in range(len(s1)):
        val1 = get_val(s1[i])
        rotation_amount = get_val(s2[i])
        
        final_val = (val1 + rotation_amount) % 26
        merged_chars.append(get_char(final_val))
        
    return "".join(merged_chars)

def solve():
    try:
        t = int(sys.stdin.readline())
    except ValueError:
        t = 0
        
    results_to_print = []
    
    for _ in range(t):
        s = sys.stdin.readline().strip()

        midpoint = len(s) // 2
        s1 = s[:midpoint]
        s2 = s[midpoint:]

        rotated_s1 = rotate_string(s1)
        rotated_s2 = rotate_string(s2)
        
        final_result = merge_strings(rotated_s1, rotated_s2)
        
        results_to_print.append(final_result)
        
    sys.stdout.write("\n".join(results_to_print) + "\n")

solve()