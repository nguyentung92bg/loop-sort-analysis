/* IL2CPP: Extensions$$IsInRange
bool Extensions__IsInRange (Dreamteck_Splines_SplineComputer_o* s, double current, double from, double to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$IsInRange
   bool Extensions__IsInRange (Dreamteck_Splines_SplineComputer_o* s, double current, double from,
   double to, const MethodInfo* method); */

bool Extensions__IsInRange_24e6778(double param_1,double param_2,double param_3)

{
  bool bVar1;
  
  bVar1 = param_2 < param_1 && param_1 < param_3;
  if (param_3 < param_2) {
    bVar1 = param_2 < param_1 || param_1 < param_3;
  }
  return bVar1;
}

