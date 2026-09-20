<p align="center">
  <img src="./assets/banner.png" alt="Flowgorithm Problem Book Repository — The Lyceum of Digital Knowledge, Baku Higher Oil School" width="100%">
</p>

<p align="center">
  <a href="https://www.linkedin.com/school/baku-higher-oil-school/"><img src="https://img.shields.io/badge/Institution-The%20Lyceum%20of%20Digital%20Knowledge%20under%20BHOS-003366?style=for-the-badge&logo=google-classroom&logoColor=white" alt="Institution"></a>
  <a href="https://www.linkedin.com/in/avaz-asgarov/"><img src="https://img.shields.io/badge/Instructor-Avaz%20Asgarov-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="Instructor"></a>
  <a href="https://github.com/AvazAsgarov/flowgorithm-algorithms-grade8/releases"><img src="https://img.shields.io/badge/Release-v1.0.0-blue?style=for-the-badge&logo=github&logoColor=white" alt="Release"></a>
  <a href="https://bhos.edu.az"><img src="https://img.shields.io/badge/Class%20Cohort-30%20Students-2B7A78?style=for-the-badge" alt="Cohort"></a>
  <a href="https://bhos.edu.az"><img src="https://img.shields.io/badge/Grade-8th%20Grade%20Informatics-008080?style=for-the-badge" alt="Grade"></a>
  <a href="http://www.flowgorithm.org/"><img src="https://img.shields.io/badge/Platform-Flowgorithm%20v4.5-4CAF50?style=for-the-badge" alt="Platform"></a>
  <a href="./topics/"><img src="https://img.shields.io/badge/Curriculum%20Language-Azerbaijani-E63946?style=for-the-badge" alt="Curriculum Language"></a>
</p>

---

## 🏛️ Institutional Affiliation & Course Overview

This curriculum repository is developed and maintained by **[Avaz Asgarov](https://www.linkedin.com/in/avaz-asgarov/)**, Informatics Teacher at **The Lyceum of Digital Knowledge under [Baku Higher Oil School (BHOS)](https://www.linkedin.com/school/baku-higher-oil-school/)**.

- **Institution:** The Lyceum of Digital Knowledge under Baku Higher Oil School
- **Class Cohort:** 30 Grade-8 students
- **Subject:** Informatics / Algorithmic Problem Solving
- **Platform:** [Flowgorithm Visual Programming](http://www.flowgorithm.org/)
- **Institutional Links:**
  - [Baku Higher Oil School — LinkedIn](https://www.linkedin.com/school/baku-higher-oil-school/)
  - [Baku Higher Oil School — Official Portal](https://bhos.edu.az)

The material serves as the central algorithmic workbook for the classroom, instilling rigorous computational habits, problem deconstruction, and visual algorithm design before transitioning to text-based syntax.

---

## 👨‍🏫 Instructor & Author Profile

**[Avaz Asgarov](https://www.linkedin.com/in/avaz-asgarov/)** bridges engineering education and secondary school pedagogy within Baku Higher Oil School:

- **Teaching Role:** Informatics Teacher at **The Lyceum of Digital Knowledge under Baku Higher Oil School (BHOS)**, leading and mentoring an active cohort of 30 Grade-8 students in algorithmic thinking.
- **Academic Background:** 5th-Year Undergraduate Student in **Process Automation Engineering** at **Baku Higher Oil School (BHOS)**.
- **Engineering Synergy:** Combining the mathematical rigor of industrial process automation with visual algorithmic modeling to deliver structured, industry-informed computational foundations to young learners.
- **Professional Profiles:**
  - [LinkedIn Profile — Avaz Asgarov](https://www.linkedin.com/in/avaz-asgarov/)
  - [GitHub Profile — @AvazAsgarov](https://github.com/AvazAsgarov)

---

## 🎯 Pedagogical Philosophy

The primary goal of this curriculum is not simply connecting flowchart blocks. It trains students to think systematically:

1. **Problem Comprehension:** Reading and breaking down mathematical and real-world scenarios.
2. **Identifying Inputs & Outputs:** Determining what is given versus what must be computed.
3. **Deriving the Algorithm:** Deriving the mathematical formulas and operational sequence.
4. **Meaningful Variable Selection:** Using self-documenting English identifiers (`length`, `width`, `area`, `totalPrice`, `distance`) instead of arbitrary single-letter variables.
5. **Flowchart Implementation:** Translating logical reasoning into Flowgorithm blocks.
6. **User Interaction & Clear Output:** Prompting the user clearly before reading inputs and presenting formatted results with context.

Practice exercises increasingly incorporate realistic, everyday scenarios (geometry, commercial calculations, travel physics, statistics) rather than artificial equations.

---

## 👥 Classroom Instruction Structure

- **Cohort:** 30 students in Grade 8.
- **Topic Instructional Flow:**
  - **1 Teacher Demonstration Exercise:** Solved live by the educator while verbalizing the reasoning process (inputs, variables, formulas, algorithm structure).
  - **3 Student Practice Exercises:** Solved independently by students during class, progressively building reasoning independence:
    - *Exercise 1:* Direct parallel application in a familiar practical context.
    - *Exercise 2:* Related scenario requiring multi-variable derivation and unit awareness.
    - *Exercise 3:* Extended challenge requiring synthesis without introducing unlearned programming features.

---

## 🌐 Language Policy

- **Student-Facing Problem Material (Azerbaijani):**
  Problem statements, user prompts (`Output "Uzunluğu daxil edin:"`), output labels, and examples are written in natural Azerbaijani, matching the classroom medium of instruction.
- **Identifiers & Code Conventions (English):**
  All variable and function names use descriptive English identifiers (`speed`, `distance`, `totalPrice`, `simpleAverage`).
- **Repository Documentation (English):**
  Repository architecture, teacher tools, and README files are maintained in English for consistency and technical clarity.

---

## 📂 Repository Structure

```text
├── assets/
│   └── banner.png                 # Official Lyceum of Digital Knowledge banner
├── topics/
│   └── sequential-algorithms/     # Topic 1 directory
│       ├── README.md              # Topic overview and exercise index
│       ├── teacher-example/       # Teacher demonstration
│       │   ├── problem.md         # Problem description (Azerbaijani)
│       │   ├── solution.fprg      # Flowgorithm solution file
│       │   └── solution.png       # Rendered Flowgorithm diagram (white background)
│       ├── student-exercise-01/   # Student practice 1
│       ├── student-exercise-02/   # Student practice 2
│       └── student-exercise-03/   # Student practice 3
├── templates/
│   ├── problem-template.md        # Standard template for problem statements
│   └── template.fprg              # Clean starter Flowgorithm XML
└── scripts/
    ├── render_flowchart.ps1       # Native Flowgorithm flowchart PNG exporter
    └── validate_solutions.ps1     # Automated repository integrity validator
```

---

## ⚙️ Maintainer & Teacher Automation Tools (`scripts/`)

The repository includes a dedicated [`scripts/`](./scripts/) folder containing automated PowerShell tools designed specifically for the teacher/maintainer to manage classroom resources efficiently:

1. **Flowchart Diagram Renderer ([`scripts/render_flowchart.ps1`](./scripts/render_flowchart.ps1)):**
   - Headlessly loads `.fprg` files and renders crisp, high-resolution flowchart diagrams directly using Flowgorithm's native rendering engine (`Flowgorithm.Main`, `Flowchart+Page`, `Stm+Program`).
   - Automatically composites every diagram onto an opaque, 100% white background (`#FFFFFF`), ensuring perfect legibility on both light and dark GitHub interfaces.
   - Usage:
     ```powershell
     # Render a single exercise
     powershell -ExecutionPolicy Bypass -File .\scripts\render_flowchart.ps1 -FprgPath "topics/sequential-algorithms/teacher-example/solution.fprg"

     # Batch-render all exercises across all topics
     powershell -ExecutionPolicy Bypass -File .\scripts\render_flowchart.ps1 -All
     ```

2. **Curriculum Integrity Validator ([`scripts/validate_solutions.ps1`](./scripts/validate_solutions.ps1)):**
   - Validates that every exercise contains `problem.md`, `solution.fprg`, and `solution.png`.
   - Checks that problem descriptions adhere to the standard Azerbaijani headers (`### Məsələ`, `### Giriş`, `### Gözlənilən çıxış`, `### Nümunə`).
   - Parses `.fprg` files against the real Flowgorithm engine to guarantee error-free execution.
   - Validates English variable naming standards.
   - Usage:
     ```powershell
     powershell -ExecutionPolicy Bypass -File .\scripts\validate_solutions.ps1
     ```

---

## 🛠️ Working with Flowgorithm Files

1. Install Flowgorithm from [flowgorithm.org](http://www.flowgorithm.org/).
2. Open any `solution.fprg` file via `File > Open...` (or double-click the file in Windows Explorer).
3. Execute the flowchart using `Program > Run` (or press `F5`).

---

## 📋 Curriculum Roadmap

- [x] **Topic 1:** [Sequential Algorithms (*Xətti alqoritmlər*)](./topics/sequential-algorithms/README.md)
  - [Teacher Demonstration: Düzbucaqlı otağın sahəsi və perimetri](./topics/sequential-algorithms/teacher-example/problem.md)
  - [Student Practice 1: Dəftərxana ləvazimatı alış-verişi və qalıq pul](./topics/sequential-algorithms/student-exercise-01/problem.md)
  - [Student Practice 2: Avtomobilin səyahət müddəti və yanacaq sərfiyyatı](./topics/sequential-algorithms/student-exercise-02/problem.md)
  - [Student Practice 3: Şagirdin üç fənn üzrə orta balı və çəkili qiyməti](./topics/sequential-algorithms/student-exercise-03/problem.md)
- [ ] **Topic 2:** Conditional Statements (*Budaqlanan alqoritmlər: Şərt operatorları*)
- [ ] **Topic 3:** While Loops (*Dövri alqoritmlər: Şərtli dövrlər*)
- [ ] **Topic 4:** For Loops (*Sayğaclı dövrlər*)
