% script to compile 

f1 = fullfile('mexReinitialization','mexReinitialization.c');
f2 = fullfile('mexReinitialization','Reinitialization.c');

mex(f1,f2)