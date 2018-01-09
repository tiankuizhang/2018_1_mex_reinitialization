% script to compile 

% -v : display detailed build and troubleshooting information
% -output nameofmex : control name of the mex file (for instance: mex -output mymex myfunc.c)
% -outdir path_to_dir : control the path to output dir
% to add -Wall flag, use: mex -v COMPFLAGS-'$cCOMPFLAGS -Wall' yprime.c
% -n : preview without executing 
% -c : compiler object file only
% -O : optimizes the object code

f1 = fullfile('mexReinitialization','mexReinitialization.c');
f2 = fullfile('mexReinitialization','Reinitialization.c');

%mex(f1,f2)

compiler_option = '/GL /fp:fast';
mex(f1,f2,['COMPFLAGS="$COMPFLAGS ' compiler_option '"']);