# 🎯 MyHunter — 2D Arcade Target Shooter in CSFML

[![Language: C](https://img.shields.io/badge/Language-C-00599C.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Library: CSFML](https://img.shields.io/badge/Library-CSFML-228B22.svg)](https://www.sfml-dev.org/)
[![Module: B-MUL-100](https://img.shields.io/badge/Epitech-B--MUL--100-blue.svg)](https://www.epitech.eu/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **MyHunter is a 2D arcade video game inspired by Duck Hunt**, built in C using the CSFML multimedia library.

---

## 🎮 Game Mechanics

- **Game Loop Architecture:** Frame-rate independent animation driven by `sfClock` elapsed time delta.
- **Sprite Sheet Animation:** Multi-frame sprites animating flight cycles.
- **Mouse Aiming & Gunshots:** Hardware cursor is replaced by a custom aiming reticle. Left-click fires a gunshot triggering hit-scan bounding box detection.
- **Score & Waves:** Successful hits increase the score and progressively accelerate target velocities.

---

## 🛠️ Build & Run

```bash
make
./my_hunter
```

---

## 📜 License

Licensed under the **MIT License with attribution** to Lucas Lhomme (Crabe).
