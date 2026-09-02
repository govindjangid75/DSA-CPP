# Day 16: Time Complexity 1 (24 Jul 2026)
**Instructor:** Raghav Garg Sir | **Course:** DSA in C++ (Earners Batch)

---

## 🎯 Topics Covered
1. **Introduction to Time Complexity & Need for Efficiency**
2. **Order of Growth & Asymptotic Notations**
   - **Big-O Notation ($O$)**: Upper bound (Worst Case)
   - **Omega Notation ($\Omega$)**: Lower bound (Best Case)
   - **Theta Notation ($\Theta$)**: Tight bound (Average Case)
3. **Common Time Complexities (Fastest to Slowest)**
   - $O(1)$ - Constant Time
   - $O(\log n)$ - Logarithmic Time (e.g., Binary Search)
   - $O(\sqrt{n})$ - Square Root Time (e.g., Prime checking)
   - $O(n)$ - Linear Time (e.g., Single loop traversal)
   - $O(n \log n)$ - Linearithmic Time (e.g., Merge Sort)
   - $O(n^2)$ - Quadratic Time (e.g., Nested loops, Bubble sort)
   - $O(n^3)$ - Cubic Time
   - $O(2^n)$ - Exponential Time (e.g., Recursive Fibonacci)
   - $O(n!)$ - Factorial Time (e.g., Permutations)

---

## 💡 Key Rules for Calculating Big-O
1. **Drop Constant Factors:**
   - $O(2n + 5) \rightarrow O(n)$
   - $O(100) \rightarrow O(1)$
2. **Drop Lower Order Terms:**
   - $O(n^2 + 5n + 100) \rightarrow O(n^2)$
   - $O(n \log n + n) \rightarrow O(n \log n)$
3. **Loop Analysis:**
   - Single loop from $1$ to $n$: $O(n)$
   - Nested loops from $1$ to $n$: $O(n \times m)$ or $O(n^2)$
   - Loop variable multiplying/dividing by $k$ ($i = i * 2$): $O(\log_k n)$

---

## 💻 Code Examples & Exercises

```cpp
// Example 1: O(1) Constant Time
int a = 10, b = 20;
int sum = a + b; // Always executes in constant steps

// Example 2: O(n) Linear Time
for(int i = 0; i < n; i++) {
    cout << i << " ";
}

// Example 3: O(log n) Logarithmic Time
for(int i = 1; i <= n; i *= 2) {
    cout << i << " ";
}

// Example 4: O(n^2) Quadratic Time
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << "*";
    }
}
```
