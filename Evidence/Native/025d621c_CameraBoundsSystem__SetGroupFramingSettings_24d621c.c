/* IL2CPP: CameraBoundsSystem$$SetGroupFramingSettings
void CameraBoundsSystem__SetGroupFramingSettings (CameraBoundsSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CameraBoundsSystem$$SetGroupFramingSettings
   void CameraBoundsSystem__SetGroupFramingSettings (CameraBoundsSystem_o* __this, const MethodInfo*
   method); */

void CameraBoundsSystem__SetGroupFramingSettings_24d621c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4bc38 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7740);
    bRam0000000004f4bc38 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lVar1 != 0) {
    uStack_58 = *(undefined8 *)(lVar1 + 0x58);
    uStack_60 = *(undefined8 *)(lVar1 + 0x50);
    uStack_50 = *(undefined8 *)(lVar1 + 0x60);
    lVar1 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                      (&uStack_60,*(undefined8 *)PTR_DAT_049c7740);
    if (lVar1 != 0) {
      fVar5 = *(float *)(lVar1 + 0x1c);
      lVar2 = *(long *)(param_1 + 0x40);
      fVar3 = (float)SheetVector2__op_Implicit_25677d8(*(undefined4 *)(lVar1 + 0x18),0);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      fVar3 = fVar3 - **(float **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
      fVar5 = fVar5 - (*(float **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
      if (fVar3 * fVar3 + fVar5 * fVar5 < _UNK_013aa3dc) {
        lVar1 = *(long *)(param_1 + 0x30);
        if (lVar1 == 0) goto LAB_025d6354;
        uVar4 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
      }
      else {
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        uVar4 = SheetVector2__op_Implicit_25677d8(*(undefined4 *)(lVar1 + 0x18),0);
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x38) = uVar4;
        *(undefined4 *)(lVar2 + 0x3c) = uVar6;
        if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
          *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x34) =
               *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20);
          return;
        }
      }
    }
  }
LAB_025d6354:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

