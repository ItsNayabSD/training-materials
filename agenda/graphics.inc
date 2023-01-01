\usepackage{ifthen}
\def \training{graphics}

% Title
\ifthenelse{\equal{\agendalanguage}{french}}{
  \def \trainingtitle{Formation Comprendre la stack graphique sous Linux}
}{
  \def \trainingtitle{Understanding the Linux Graphics Stack training}
}

% Duration
\ifthenelse{\equal{\trainingtype}{online}}{
  \def \trainingduration{4}
}{
  \def \trainingduration{2}
}

% Training objectives
\ifthenelse{\equal{\agendalanguage}{french}}{
  \def \traininggoals{
    \begin{itemize}
    \item Être capable de comprendre les bases de l'affichage graphique: représentation
      des images et des couleurs, affichage de pixels, opérations sur
      les pixels.
    \item Être capable de comprendre le matériel lié à l'affichage graphique: composants
      du {\em pipeline} graphique, matériel pour le rendu et l'affichage
      graphique.
    \item Avoir une compréhension claire des composants de la pile
      logicielle pour le graphique dans le noyau Linux et de leurs
      rôles: TTY, sous-systèmes {\em framebuffer} et DRM.
    \item Avoir une compréhension claire de la pile logicielle pour le
      graphique en espace utilisateur: DRM au niveau espace utilisateur,
      X.org, Wayland, OpenGL.
    \end{itemize}
  }
}{
  \def \traininggoals{
    \begin{itemize}
    \item Be able to understand the basics of graphics display: image
      and color representation, pixel drawing, pixel operations.
    \item Be able to understand graphics hardware: display pipeline
      components, display and rendering hardware.
    \item Have a solid understanding of the Linux kernel graphics stack
      components and role: TTY, framebuffer and DRM subsystems.
    \item Have a solid understanding of the Linux user-space graphics
      stack components and role: DRM from user-space, X.org, Wayland,
      OpenGL.
    \end{itemize}
  }
}