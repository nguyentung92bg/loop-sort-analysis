/* IL2CPP: ColorType$$Equals
bool ColorType__Equals (ColorType_o __this, Il2CppObject* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ColorType$$Equals
   bool ColorType__Equals (ColorType_o __this, Il2CppObject* obj, const MethodInfo* method); */

bool ColorType__Equals_24f9dc8(int *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f4bd41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c88c8);
    bRam0000000004f4bd41 = 1;
  }
  if ((param_2 != (long *)0x0) && (*param_2 == *(long *)PTR_DAT_049c88c8)) {
    puVar1 = (undefined8 *)thunk_FUN_0222cb7c(param_2);
    if (*param_1 == (int)*puVar1) {
      return param_1[1] == (int)((ulong)*puVar1 >> 0x20);
    }
  }
  return false;
}

