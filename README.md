# SoftwareLearning

This repositories will place multiple self projects.

## Visual Studio

* **Funcs.h:** void class. For testing the code. Suppose to directly access object from classes.
* **main.cpp:** To call _funcs.h_

```mermaid
graph LR
c((CProj))
f[Funcs.h]
m[main.cpp]
subgraph classes++
h[class.h]
cpp[class.cpp]
end
c---f
c---m
c---h
c---cpp
```

--->

```mermaid
graph LR
c((CProj))
f[Funcs.h]
m[main.cpp]
subgraph classLib_1
h[class.h]
cpp[class.cpp]
end
subgraph classLib_2
h2[class.h]
cpp2[class.cpp]
end
c---f
c---m
c---h
c---cpp
c---h2
c---cpp2
```

