# 🖥️ Computer Graphics Course Notes

**Course Code**: CMP 234 | **Credit Hours**: 3-1-2 | [**Syllabus**](#syllabus-table)  

<!--
[![PRs Welcome](https://img.shields.io/badge/PRs-Welcome-brightgreen.svg)](https://github.com/KushalPrasadJoshi/computer-graphics/pulls)
-->
![Status](https://img.shields.io/badge/Status-Inactive-red)

A structured repository for **Pokhara University's Computer Graphics** (CMP 234). Contains theory, code examples, practical labs, and project work to help students master **Computer Graphics** from basics to advanced concepts. This work is an independent effort by **Kushal Prasad Joshi**, inspired by the curriculum of **Pokhara University**, and is intended to support students in their academic journey. While based on the university's course structure, this work is not officially affiliated with or endorsed by **Pokhara University**.

---

## Overview  
This repository contains **structured notes, code examples, and resources** for the Computer Graphics course.  
- **Focus**: Algorithms (Bresenham, DDA), 2D/3D transformations, OpenGL, and visual realism.  
- **Audience**: Students and developers seeking clear, example-driven explanations.  

---

## How to Use This Repo  
### 1. Clone the Repository  
```bash  
git clone https://github.com/your-username/computer-graphics-notes.git  
cd computer-graphics-notes  
```  

### 2. Setting Up `graphics.h` in VS Code  
1. **Install WinBGIm** (Windows):  
   - Download [WinBGIm](https://www.cs.colorado.edu/~main/bgi/doc/), add `graphics.h` to `C:\MinGW\include`.  
2. **Configure VS Code**:  
   - Add `-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32` to `tasks.json` under `args`.  

### 3. Navigate the Notes  
- Click links in the [syllabus table](#syllabus-table) to jump to specific topics.  
- Code examples are embedded in each unit’s folder.

---

## File Structure  
```  
├── theory/  
│   ├── 01-overview-of-computer-graphics/  # Unit 1  
│   │   ├── README.md               # Notes with subsections (e.g., #11-introduction)  
│   │   └── code-files              # Code for Unit 1  
│   ├── 02-scan-conversion-algorithms/     # Unit 2  
│   └── ...                     # Units 3–7  
├── practicals/                    # Labs
├── assets/                     # Diagrams (e.g., raster scan)  
└── resources/                  # Textbooks, cheat sheets  
```

---

## Syllabus Table 

<table style="width: 100%; border-collapse: collapse; table-layout: fixed;">
  <colgroup>
    <col style="width: 40% !important;">
    <col style="width: 60% !important;">
  </colgroup>
  <thead>
    <tr>
      <th style="border: 1px solid #ddd; padding: 8px; text-align: left;">Specific Objectives</th>
      <th style="border: 1px solid #ddd; padding: 8px; text-align: left;">Contents</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Become familiar with the broader transformation of dual field of Computer Graphics and familiarize students with basic graphics hardware and software.<br>
          It intends to enhance the understanding of the technology used for producing graphical output on display devices.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/01-overview-of-computer-graphics/README.md">Unit 1: Overview of Computer Graphics (7hrs)</a></strong><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#11-introduction">1.1 Introduction, Applications, and Recent Trends</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#12-input-devices">1.2 Interactive Input Devices</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#13-display-devices">1.3 Display Devices, Color Monitors, Hard Copy Devices</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#14-raster-random-scan">1.4 Raster and Random Scan Systems and Architectures</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#15-video-controller">1.5 Video Controller</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#16-dac-frame-buffer">1.6 Use of Digital-to-Analog Converter and Frame Buffer Organization</a><br>
        - <a href="/theory/01-overview-of-computer-graphics/README.md#17-gpu">1.7 Graphics Software, Modern Graphics Hardware (GPU)</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Learn about various scan conversion and area filling algorithms.<br>
          Students will be able to implement these scan conversion algorithms using a programming language.<br>
          This chapter helps students learn how algorithms are used to generate output primitives and fill them with specified intensities.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/02-scan-conversion-algorithms/README.md">Unit 2: Scan Conversion Algorithms (7hrs)</a></strong><br>
        - <a href="/theory/02-scan-conversion-algorithms/README.md#21-scan-conversion">2.1 Scan Conversion</a><br>
        - <a href="/theory/02-scan-conversion-algorithms/README.md#22-line-algorithms">2.2 Line Drawing Algorithms</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/02-scan-conversion-algorithms/README.md#221-dda">2.2.1 Digital Differential Analyzer (DDA)</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/02-scan-conversion-algorithms/README.md#232-bresenham">2.3.2 Bresenham’s Algorithm</a><br>
        - <a href="/theory/02-scan-conversion-algorithms/README.md#23-circle">2.3 Circle Generation Algorithm</a><br>
        - <a href="/theory/02-scan-conversion-algorithms/README.md#24-ellipse">2.4 Ellipse Generation Algorithm</a><br>
        - <a href="/theory/02-scan-conversion-algorithms/README.md#25-filled-area">2.5 Filled Area Primitives</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/02-scan-conversion-algorithms/README.md#251-scan-line">2.5.1 Scan Line Polygon Fill Algorithm</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/02-scan-conversion-algorithms/README.md#252-boundary-flood-fill">2.5.2 Boundary Fill Algorithm, Flood Fill Algorithm</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Get students well acquainted with the two-dimensional geometric transformations and viewing.<br>
          Able to make use of various transformation operations and viewing operations to reposition and resize objects in two dimensionals scence.<br>
          Learn about the operations used in viewing routines that convert a world coordinate scene description to a display for an output device.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/03-2d-geometric-transformations/README.md">Unit 3: 2D Geometric Transformations and Viewing (8hrs)</a></strong><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#31-transformations">3.1 Two Dimensional Transformations</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/03-2d-geometric-transformations/README.md#311-translation-rotation">3.1.1 Translation, Rotation, Scaling, Shearing, Reflection</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#32-matrix-representations">3.2 Matrix Representations of Transformations</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#33-homogeneous-coordinates">3.3 Homogeneous Coordinate System</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#34-composite-transformations">3.4 Composite Transformations</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#35-windowing-pipeline">3.5 Windowing Concepts, Two Dimensional Viewing Pipeline</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#36-window-viewport">3.6 Window to Viewport Transformation</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#37-cohen-sutherland">3.7 Line Clipping Algorithm: Cohen-Sutherland</a><br>
        - <a href="/theory/03-2d-geometric-transformations/README.md#38-sutherland-hodgeman">3.8 Polygon Clipping: Sutherland-Hodgeman</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Learn about the extensions of two-dimensional methods for geometric transformation in three dimensions.<br>
          Helps them apply the knowledge of three-dimensional rendering and transformations for representing objects more accurately.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/04-3d-graphics/README.md">Unit 4: Graphics in Three Dimensions (8 hrs)</a></strong><br>
        - <a href="/theory/04-3d-graphics/README.md#41-coordinate-systems">4.1 Three Dimensional Coordinate Systems</a><br>
        - <a href="/theory/04-3d-graphics/README.md#42-transformations">4.2 Three Dimensional Transformations</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#421-3d-transformations">4.2.1 Translation, Rotation, Scaling, Reflection</a><br>
        - <a href="/theory/04-3d-graphics/README.md#43-representations">4.3 Three Dimensional Representations</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#431-polygon-surfaces">4.3.1 Polygon Surfaces</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#432-cubic-bezier">4.3.2 Cubic Spline and Bezier Curve</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#433-bezier-surface">4.3.3 Non-Planar Surface: Bezier Surface</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#434-fractals">4.3.4 Fractal Geometry Method</a><br>
        - <a href="/theory/04-3d-graphics/README.md#44-viewing-pipeline">4.4 Three Dimensional Viewing Transformation and Pipeline</a><br>
        - <a href="/theory/04-3d-graphics/README.md#45-projections">4.5 Projections</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#451-parallel">4.5.1 Parallel Projection</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/04-3d-graphics/README.md#452-perspective">4.5.2 Perspective Projection</a><br>
        - <a href="/theory/04-3d-graphics/README.md#46-clipping">4.6 Clipping in Three Dimensions</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Get acquainted with the techniques used for bringing visual realism in computer-generated graphical output primitives.<br>
          Familiarize with visible surface detection techniques for creating realistic displays and in computing light intensities of surfaces using lighting or shading models for generating realistic views.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/05-visual-realism/README.md">Unit 5: Visual Realism (7hrs)</a></strong><br>
        - <a href="/theory/05-visual-realism/README.md#51-hidden-surfaces">5.1 Hidden Surfaces and Hidden Surface Removal Approaches</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#511-back-face">5.1.1 Back-Face Detection</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#512-depth-buffer">5.1.2 Depth Buffer Method</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#513-a-buffer">5.1.3 A-buffer Method</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#514-scan-line">5.1.4 Scan Line Method</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#515-depth-sorting">5.1.5 Depth Sorting Method</a><br>
        - <a href="/theory/05-visual-realism/README.md#52-illumination">5.2 Illumination and Shading Methods</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#521-illumination-models">5.2.1 Illumination Theory and Models</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5211-ambient">5.2.1.1 Ambient Light</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5212-diffuse">5.2.1.2 Diffuse Reflection</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5213-specular">5.2.1.3 Specular Reflection (Phong Model)</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#522-shading-methods">5.2.2 Polygon Surface Shading Methods</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5221-flat">5.2.2.1 Constant Shading (Flat Shading)</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5222-gouraud">5.2.2.2 Gouraud Shading</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5223-phong">5.2.2.3 Phong Shading</a><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#5224-fast-phong">5.2.2.4 Fast Phong Shading</a><br>
        - <a href="/theory/05-visual-realism/README.md#53-color-models">5.3 Color Models</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#531-rgb">5.3.1 RGB</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/05-visual-realism/README.md#532-cmyk">5.3.2 CMYK</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Gain a good understanding of the use of graphical standards necessary for achieving software portability.<br>
          Become familiar with the basic structure or format of a graphical file and know the ways of visually representing data sets.<br>
          Learn about writing graphical programs that can be ported to multiple hardware platforms without extensive rewriting of the programs through the use of graphical standards.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/06-graphical-standards/README.md">Unit 6: Graphical Standards (4hrs)</a></strong><br>
        - <a href="/theory/06-graphical-standards/README.md#61-need-for-standards">6.1 Need for Machine-Independent Graphical Languages</a><br>
        - <a href="/theory/06-graphical-standards/README.md#62-standards">6.2 Graphical Standards: PHIGS, GKS</a><br>
        - <a href="/theory/06-graphical-standards/README.md#63-language-binding">6.3 Graphics Software Standards and Language Binding</a><br>
        - <a href="/theory/06-graphical-standards/README.md#64-file-formats">6.4 Overview of Graphics File Formats</a><br>
        - <a href="/theory/06-graphical-standards/README.md#65-visualization">6.5 Visualization of Data Sets</a>
      </td>
    </tr>
    <tr>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong>
          Learn about the library functions provided in OpenGL for graphical rendering and performing geometric transformations.<br>
          Enable students to write programs for drawing graphical output primitives and performing basic transformations.
        </strong>
      </td>
      <td style="border: 1px solid #ddd; padding: 8px;">
        <strong><a href="/theory/07-opengl-intro/README.md">Unit 7: Introduction to OpenGL (4hrs)</a></strong><br>
        - <a href="/theory/07-opengl-intro/README.md#71-overview">7.1 Overview and Basic Architecture of OpenGL</a><br>
        - <a href="/theory/07-opengl-intro/README.md#72-gl-libraries">7.2 GL Related Libraries</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/07-opengl-intro/README.md#721-primitives">7.2.1 Drawing Basic Output Primitives and Polygons</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/07-opengl-intro/README.md#722-callbacks">7.2.2 Call Back Functions and Input Handling</a><br>
          &nbsp;&nbsp;&nbsp;&nbsp;- <a href="/theory/07-opengl-intro/README.md#723-transformations">7.2.3 Basic Transformations</a>
      </td>
    </tr>
  </tbody>
</table>

---

## 📜 License
This repository is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the code, provided that the original copyright notice and license text are included in all copies or substantial portions of the Software. 

---

**Happy Reading!** 🎉