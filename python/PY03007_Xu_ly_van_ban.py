import sys

def process(text):
    for c in ['?', '!']:
        text = text.replace(c, '.')
        
    sentences = text.split('.')
    
    result = []
    for sentence in sentences:
        sentence = sentence.strip()
        
        if any(char.isalnum() for char in sentence):
            sentence = ' '.join(sentence.lower().split())
            
            sentence = sentence[0].upper() + sentence[1:]
            result.append(sentence)
                
    return result

if __name__ == "__main__":
    
    input_text = sys.stdin.read()
    
    sentences = process(input_text)
    
    for c in sentences:
        print(c)