/* IL2CPP: Extensions$$WrapBaseColor
int32_t Extensions__WrapBaseColor (int32_t baseColor, int32_t shift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$WrapBaseColor
   int32_t Extensions__WrapBaseColor (int32_t baseColor, int32_t shift, const MethodInfo* method);
    */

int Extensions__WrapBaseColor_24e626c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 + param_2 + -1) % 0xd;
  uVar1 = uVar2 + 0xd;
  if (uVar2 < 0xfffffff3) {
    uVar1 = uVar2;
  }
  return uVar1 + 1;
}

