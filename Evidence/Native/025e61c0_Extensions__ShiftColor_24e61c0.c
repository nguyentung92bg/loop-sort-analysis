/* IL2CPP: Extensions$$ShiftColor
ColorType_o Extensions__ShiftColor (ColorType_o colorType, int32_t shift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ShiftColor
   ColorType_o Extensions__ShiftColor (ColorType_o colorType, int32_t shift, const MethodInfo*
   method); */

undefined8 Extensions__ShiftColor_24e61c0(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc8a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bc8a = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_28 = 0;
  uVar2 = ((int)param_1 + param_2 + -1) % 0xd;
  uVar1 = uVar2 + 0xd;
  if (uVar2 < 0xfffffff3) {
    uVar1 = uVar2;
  }
  ColorType___ctor_24f9bd8(&uStack_28,uVar1 + 1,param_1 >> 0x20,0);
  return uStack_28;
}

