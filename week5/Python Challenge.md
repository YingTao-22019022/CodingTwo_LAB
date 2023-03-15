LOOK THE PHOTO!!

![image](https://user-images.githubusercontent.com/119857836/225220217-a7464731-7597-4041-aff6-17c16d7b5f5f.png)

```python
!p%j6o36xd6v6ixl;[gp&zw-z?%c6g52byikwtwx5f5sm5r7r8dnvzsepb7:2usqw]ooq7!q6=
```

#### Python code to solve the puzzle:

```python
import re

# Define an encrypted string
encrypted_string = '!p%j6o36xd6v6ixl;[gp&zw-z?%c6g52byikwtwx5f5sm5r7r8dnvzsepb7:2usqw]ooq7!q6='

# Filter out unnecessary characters. Only lowercase letters and digits are reserved
filtered_string = re.sub('[^a-z0-9]+', '', encrypted_string)

# Find the password
for i in range(len(filtered_string) - 7):
    password = filtered_string[i:i+8]
    print('Found password:', password)

```

`j6o36xd6`
