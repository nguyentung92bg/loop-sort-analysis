/* IL2CPP: ShaderInstaller.<Initialize>d__0$$MoveNext
void ShaderInstaller__Initialize_d__0__MoveNext (ShaderInstaller__Initialize_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShaderInstaller.<Initialize>d__0$$MoveNext
   void ShaderInstaller__Initialize_d__0__MoveNext (ShaderInstaller__Initialize_d__0_o __this, const
   MethodInfo* method); */

void ShaderInstaller__Initialize_d__0__MoveNext_2509374(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4bdb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8fc0);
    FUN_021f03f8(PTR_DAT_049c8fc8);
    FUN_021f03f8(PTR_DAT_049c8fd0);
    FUN_021f03f8(PTR_DAT_049c8fd8);
    bRam0000000004f4bdb4 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_30 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    uVar2 = UnityEngine_Resources__LoadAsync_object__26a751c
                      (*(undefined8 *)PTR_DAT_049c8fd8,*(undefined8 *)PTR_DAT_049c8fc8);
    auStack_30 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3804b04(uVar2,0);
    uVar3 = Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__get_IsCompleted_380a738
                      (auStack_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_30;
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c25c(param_1 + 2,auStack_30,param_1,*(undefined8 *)PTR_DAT_049c8fc0);
      return;
    }
  }
  plVar4 = (long *)Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__GetResult_380a750
                             (auStack_30,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*plVar4 != *(long *)PTR_DAT_049c8fd0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20();
  }
  UnityEngine_ShaderVariantCollection__WarmUp_3c27e04(plVar4,0);
  cVar1 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar4 = *(long **)(param_1 + 2);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02609514;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049b56d0,2);
LAB_02609514:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}

