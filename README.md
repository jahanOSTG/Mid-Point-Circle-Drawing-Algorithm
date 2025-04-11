# Mid Point Circle Drawing Algorithm

The **Midpoint Circle Drawing Algorithm** is a basic and important method in computer graphics used to draw circles. It uses only integer calculations and takes advantage of the circle’s symmetry to draw points faster and more efficiently. By calculating points for just one octant (or part of the circle), it mirrors them across the other seven octants to complete the full circle.
## Algorithm Overview

### Given:
- Center coordinates: `(Xc, Yc)`

- Radius: `R`

---

### Step 1: Initialize Values


Set the starting point at the top of the circle:

- `X = 0`

- `Y = R`

---

### Step 2: Clculate the initial value parameter.
- `P = 1 - R`

---

### Step 3: Decision Parameter Cases

Suppose the current point is `(X, Y)`, and we want to find the next point. The following cases apply based on the value of the decision parameter P:

### Case 1: If `P < 0`
- `X = X + 1`

- `P = P + 2 * X + 1`

### Case 2: If `P ≥ 0`
- `X = X + 1`

- `Y = Y - 1`

- `P = P + 2 * X - 2 * Y + 1`



---

### Step 4: Plot Symmetrical Points

For each `(X, Y)` calculated, plot the 8 symmetric points using the center `(Xc, Yc)`:

- `(Xc + X, Yc + Y)`

- `(Xc - X, Yc + Y)`

- `(Xc + X, Yc - Y)`

- `(Xc - X, Yc - Y)`

- `(Xc + Y, Yc + X)`

- `(Xc - Y, Yc + X)`

- `(Xc + Y, Yc - X)`

- `(Xc - Y, Yc - X)`

---
### Step 5: Repeat Until X ≥ Y

Continue the loop and plot points until the condition X ≥ Y is satisfied.

---
### Step 6:

Step-05 generates all the points for one octant.To find the points for other seven octants, follow the eight symmetry property of circle.


---
##  Mid Point Circle Visualization:
---

Here is a visual representation of how the  Mid Point Circle Drawing Algorithm works:

<img src="output.png" width="600" height="300" alt="DDA">

---

## Documentation:

For a more detailed explanation of the Mid Point Circle Drawing Algorithm, check out the full documentation:

[Click here for Documentation]()



