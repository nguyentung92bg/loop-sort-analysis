/* IL2CPP: NicknameInstaller$$Install
void NicknameInstaller__Install (NicknameInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: NicknameInstaller$$Install
   void NicknameInstaller__Install (NicknameInstaller_o* __this, VContainer_IContainerBuilder_o*
   builder, const MethodInfo* method); */

void NicknameInstaller__Install_2551988(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_049cae80;
  if ((bRam0000000004f4c07a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cae80);
    bRam0000000004f4c07a = 1;
  }
  InstallerBase__Install_25090f4(param_1,param_2,0);
  lVar7 = *(long *)puVar1;
  puVar5 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_02229774(lVar7);
    puVar5 = *(undefined8 **)(lVar7 + 0x38);
  }
  uVar8 = *puVar5;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle_310ebfc(uVar8,0);
  if (cRam0000000004f49bed == '\0') {
    FUN_021f03f8(&DAT_04bd1958,plVar3,1,0);
    FUN_021f03f8(&DAT_04b8b9e0);
    FUN_021f03f8(&DAT_04b8cc40);
    cRam0000000004f49bed = '\x01';
  }
  if (plVar3 == (long *)0x0) goto LAB_0235c740;
  uVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
  if ((uVar2 & 1) == 0) {
LAB_0235c690:
    uVar8 = thunk_FUN_0222ca34(_DAT_04b8cc40);
    VContainer_RegistrationBuilder___ctor_3f1b750(uVar8,plVar3,1,0);
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 1000))(plVar3,*(undefined8 *)(*plVar3 + 0x3f0));
    if ((uVar2 & 1) == 0) goto LAB_0235c690;
    uVar8 = thunk_FUN_0222ca34(_DAT_04b8b9e0);
    VContainer_Internal_OpenGenericRegistrationBuilder___ctor_3f1b78c(uVar8,plVar3,1,0);
  }
  lVar7 = _DAT_04bd1958;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(_DAT_04bd1958 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(_DAT_04bd1958 + 0x50)) * 0x10 +
                  0x138;
          goto LAB_0235c714;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    lVar4 = FUN_02229a4c(param_2);
LAB_0235c714:
    lVar7 = thunk_FUN_0220ec70(*(undefined8 *)(lVar4 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x0235c73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 8))(param_2,uVar8,lVar7);
    return;
  }
LAB_0235c740:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

