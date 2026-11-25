/* IL2CPP: ToggleElement$$OnClicked
void ToggleElement__OnClicked (ToggleElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ToggleElement$$OnClicked
   void ToggleElement__OnClicked (ToggleElement_o* __this, const MethodInfo* method); */

void ToggleElement__OnClicked_241ec54(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_14 [4];
  
  bVar1 = *(char *)(param_1 + 0x88) == '\0';
  *(bool *)(param_1 + 0x88) = bVar1;
  ToggleElement__UpdateView_241ecc0(param_1,1);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    auStack_14[0] = bVar1;
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),auStack_14,*(undefined8 *)(lVar2 + 0x28));
  }
  return;
}

