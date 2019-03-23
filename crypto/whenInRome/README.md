# this python script can be used to encode/decode the message.

message = "CTF_flag(Caesar picked a peck of pickled pumpernickles.)"
code = "JAM_mshn(Jhlzhy wpjrlk h wljr vm wpjrslk wbtwlyupjrslz.)"

shift = 7 # switch to -7 and switch message below to code var to decode
for char in message:
    if char.isalpha():
        caps = False
        if char.isupper():
            caps = True
            char = char.lower()
        secretChar = chr((ord(char) + shift - 97) % 26 + 97)
        if caps:
            secretChar = secretChar.upper()
        print(secretChar, end='')
    else:
        print(char, end='')