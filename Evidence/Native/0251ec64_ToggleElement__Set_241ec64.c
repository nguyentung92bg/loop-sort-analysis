/* IL2CPP: ToggleElement$$Set
void ToggleElement__Set (ToggleElement_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ToggleElement$$Set
   void ToggleElement__Set (ToggleElement_o* __this, bool isActive, const MethodInfo* method); */

void ToggleElement__Set_241ec64(long param_1,byte param_2)

{
  long lVar1;
  byte abStack_14 [4];
  
  *(byte *)(param_1 + 0x88) = param_2;
  ToggleElement__UpdateView_241ecc0(param_1,1);
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    abStack_14[0] = param_2 & 1;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),abStack_14,*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}

