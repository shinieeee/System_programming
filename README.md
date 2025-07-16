
# System Programming Practice – C

This repository contains basic C programs demonstrating key system programming concepts:  

- 🧵 Threads
- 🔐 Mutex
- 🔁 Processes
- 🧪 Pipes

---

## Topics Covered

- **Threads**: Creating and joining threads using `pthread_create()` and `pthread_join()`
- **Mutex**: Synchronizing threads using `pthread_mutex_t`
- **Processes**: Using `fork()`, `exec()`, and `wait()`
- **Pipes**: Communication between parent and child processes using `pipe()`

---

## How to Compile & Run

```bash
gcc filename.c -o output      # For normal programs
gcc thread.c -pthread -o thread  # For thread/mutex programs

./output
````

---

## Example Output

```
Thread 1: counter = 100000
Thread 2: counter = 200000
Child says: Hello from pipe!
Parent process completed.
```

---

## Coming Up Next

* Signals
* Shared memory
* Sockets

```

---

Let me know if you’d like:
- A folder structure layout
- A matching `Makefile` for each topic

I can also help auto-generate file headers for each `.c` file.
```
