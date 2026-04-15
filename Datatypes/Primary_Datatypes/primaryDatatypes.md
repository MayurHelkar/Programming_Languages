| Category            | Data Type   | Size (Typical)         | Range / Precision  | Description                                           |
| ------------------- | ----------- | ---------------------- | ------------------ | ----------------------------------------------------- |
| **Basic (Primary)** | `int`       | 4 bytes                | -2³¹ to 2³¹-1      | Stores integer values                                 |
| **Basic (Primary)** | `char`      | 1 byte                 | -128 to 127        | Stores single characters (ASCII values)               |
| **Basic (Primary)** | `float`     | 4 bytes                | ~6 decimal digits  | Single precision floating-point                       |
| **Basic (Primary)** | `double`    | 8 bytes                | ~15 decimal digits | Double precision floating-point                       |
| **Derived**         | `array`     | Depends on elements    | Depends on type    | Collection of same-type elements in contiguous memory |
| **Derived**         | `pointer`   | 4/8 bytes              | Address range      | Stores memory address of variables                    |
| **Derived**         | `structure` | Sum of members         | Depends on members | Groups different data types                           |
| **Derived**         | `union`     | Size of largest member | Depends on member  | Shares memory among members                           |
| **Enumeration**     | `enum`      | Same as `int`          | Named constants    | Improves readability with named integer values        |
| **Void**            | `void`      | 0 bytes                | No value           | Represents absence of data / return type              |
