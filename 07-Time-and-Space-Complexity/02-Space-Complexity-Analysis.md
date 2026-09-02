# Day 17: Time Complexity 2 & Space Complexity (25 Jul 2026)
**Instructor:** Raghav Garg Sir | **Course:** DSA in C++ (Earners Batch)

---

## 🎯 Topics Covered
1. **Space Complexity vs Auxiliary Space**
   - **Space Complexity:** Total memory used by the algorithm with respect to input size.
   - **Auxiliary Space:** Extra or temporary space used by the algorithm, excluding the input data.
2. **Memory Analysis in C++**
   - Primitive types (`int` = 4 bytes, `char` = 1 byte, `double` = 8 bytes).
   - Array & Vector allocations: $O(n)$ extra space for dynamic array of size $n$.
   - Call Stack Memory (Recursion stack frames): $O(h)$ where $h$ is recursion depth.
3. **Advanced Time Complexity Patterns**
   - Arithmetic Progression loops: $1 + 2 + 3 + ... + n = \frac{n(n+1)}{2} = O(n^2)$
   - Geometric series in recursion trees
   - Amortized Time Complexity (e.g., dynamic array / `std::vector` push_back doubling strategy)

---

## 💡 Summary Table: Complexity of Standard Operations

| Operation / Structure | Time Complexity | Auxiliary Space |
|---|---|---|
| Access Element in Array (`arr[i]`) | $O(1)$ | $O(1)$ |
| Linear Search | $O(n)$ | $O(1)$ |
| Binary Search (Iterative) | $O(\log n)$ | $O(1)$ |
| Vector `push_back` (Amortized) | $O(1)$ | $O(1)$ |
| Bubble / Selection / Insertion Sort | $O(n^2)$ | $O(1)$ |
| Merge Sort | $O(n \log n)$ | $O(n)$ |
| Recursion Stack Depth $n$ | $O(n)$ | $O(n)$ |
