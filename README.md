# C++ Memory & References

Deep dive into C++ memory model: heap allocation with `new`/`delete`, pointer-to-member, references, and file stream I/O — building the mental model for manual resource management.

## Concepts Covered

### References vs Pointers
```cpp
int  val  = 42;
int *ptr  = &val;   // pointer — can be null, reassignable
int &ref  = val;    // reference — always valid, not reassignable
```

### Dynamic Memory
```cpp
// Stack (auto-freed)
Zombie z("stack_zombie");

// Heap (manual free required)
Zombie *z = new Zombie("heap_zombie");
delete z;

// Array allocation
Zombie *horde = newZombie(N);
delete[] horde;
```

### Pointer-to-Member
```cpp
void (Harl::*complaints[4])() = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
};
(harl.*complaints[level])();
```

### File Streams
- `std::ifstream` for reading
- `std::ofstream` for writing
- String replacement across files

## Build

```bash
make && ./ex00
```

## Tech Stack

`C++98` `Dynamic Memory` `References` `Pointer-to-Member` `File I/O`

