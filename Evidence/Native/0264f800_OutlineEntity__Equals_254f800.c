/* IL2CPP: OutlineEntity$$Equals
bool OutlineEntity__Equals (OutlineEntity_o __this, Il2CppObject* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineEntity$$Equals
   bool OutlineEntity__Equals (OutlineEntity_o __this, Il2CppObject* obj, const MethodInfo* method);
    */

bool OutlineEntity__Equals_254f800(int *param_1,long *param_2)

{
  bool bVar1;
  int *piVar2;
  
  if ((bRam0000000004f4c06e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cac88);
    bRam0000000004f4c06e = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)PTR_DAT_049cac88)) {
    bVar1 = false;
  }
  else {
    piVar2 = (int *)thunk_FUN_0222cb7c(param_2);
    bVar1 = *param_1 == *piVar2;
  }
  return bVar1;
}

