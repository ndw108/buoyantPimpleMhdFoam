# buoyantPimpleMhdFoam
buoyant heat transfer &amp; induction based MHD fluid solver

This solver combines existing solvers buoyantPimpleFoam and mhdFoam to create an induction MHD solver with compressible heat transfer. 
Thermophysical equation of state model has been confirmed valid for both "icoPolynomial" and "Boussinesq". 
Electrical conductivity and Magnetic permeabiltiy are compiled directly into the solver via the createFields.H directory.

2D validation has been undertaken using the case files provided and compared with reference [1] for both Ra=10^4, Ha=100, and Ra=10^5, Ha=200.

Existing turbulence and radiation models have not been tested or validated with this solver.



[1] Pirmohammadi, M. Ghassemi, M. Sheikzadeh, G. A. “The Effect of a Magnetic Field on Buoyancy-Driven Convection in Differentially Heated Square Cavity”, IEEE Transactions on Magnetics, 2008, conference proceedings
