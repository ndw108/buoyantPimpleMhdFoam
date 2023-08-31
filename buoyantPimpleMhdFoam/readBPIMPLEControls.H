pimpleControl bpimple(mesh, "BPIMPLE");

const dictionary& Bpimple = mesh.solutionDict().subDict("BPIMPLE");

const int nBcorr = Bpimple.getOrDefault<int>("nCorrectors", 1);
