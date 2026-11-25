/* IL2CPP: MainPlaySession$$get_Theme
int32_t MainPlaySession__get_Theme (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_Theme
   int32_t MainPlaySession__get_Theme (MainPlaySession_o* __this, const MethodInfo* method); */

int MainPlaySession__get_Theme_24fbad0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bd4f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    bRam0000000004f4bd4f = 1;
  }
  lVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x68) != 0) {
      return *(int *)(lVar6 + 0x68);
    }
    if ((param_1[2] != 0) && (lVar6 = *(long *)(param_1[2] + 0x30), lVar6 != 0)) {
      iVar4 = ConstantSheetBase_object___GetInt_281c070(lVar6,1,*(undefined8 *)PTR_DAT_049c4228);
      if (param_1[2] != 0) {
        lVar6 = *(long *)(param_1[2] + 0x60);
        if (lVar6 != 0) {
          uStack_38 = *(undefined8 *)(lVar6 + 0x50);
          uStack_40 = *(undefined8 *)(lVar6 + 0x48);
          uStack_28 = *(undefined8 *)(lVar6 + 0x60);
          uStack_30 = *(undefined8 *)(lVar6 + 0x58);
          iVar5 = CloudPrefsInt__get_Value_24e99c0(&uStack_40,0,0);
          lVar6 = *(long *)(lVar6 + 0x68);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = (iVar5 + 1) / iVar4;
          }
          iVar4 = 0;
          if (uVar1 != 0) {
            iVar4 = iVar3 / (int)uVar1;
          }
          uVar2 = iVar3 - iVar4 * uVar1;
          if (uVar2 < uVar1) {
            return *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

