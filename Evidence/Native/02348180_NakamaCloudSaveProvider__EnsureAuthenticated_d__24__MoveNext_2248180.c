/* IL2CPP: NakamaCloudSaveProvider.<EnsureAuthenticated>d__24$$MoveNext
void NakamaCloudSaveProvider__EnsureAuthenticated_d__24__MoveNext (NakamaCloudSaveProvider__EnsureAuthenticated_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider.<EnsureAuthenticated>d__24$$MoveNext
   void NakamaCloudSaveProvider__EnsureAuthenticated_d__24__MoveNext
   (NakamaCloudSaveProvider__EnsureAuthenticated_d__24_o __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__EnsureAuthenticated_d__24__MoveNext_2248180(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  long *plStack_38;
  ulong uStack_28;
  
  if ((bRam0000000004f49b5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b58a8);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5748);
    FUN_021f03f8(PTR_DAT_049b5750);
    FUN_021f03f8(PTR_DAT_049b5758);
    FUN_021f03f8(PTR_DAT_049b55a0);
    bRam0000000004f49b5a = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_02348238:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_40,&uStack_28,*(undefined8 *)PTR_DAT_049b5748);
    if (uStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = Voodoo_Nakama_Services_NakamaInitEventArgs__get_IsSuccess_426e348(uStack_28,0);
    if ((uVar4 & 1) != 0) {
      uStack_28 = 0;
      uVar3 = NakamaServices__TryGetApi_2243784(&uStack_28);
      goto LAB_02348300;
    }
  }
  else {
    uStack_28 = 0;
    uVar4 = NakamaServices__TryGetApi_2243784(&uStack_28);
    if ((uVar4 & 1) != 0) {
      uVar3 = 1;
      goto LAB_02348300;
    }
    uVar4 = Voodoo_Sauce_Core_VoodooSauceServices__TryGet_object__272d778
                      (&plStack_38,*(undefined8 *)PTR_DAT_049b55a0);
    plVar2 = plStack_38;
    puVar1 = PTR_DAT_049b5578;
    if ((uVar4 & 1) != 0) {
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = *plStack_38;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_023482ec;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)PTR_DAT_049b5578,1);
LAB_023482ec:
      uVar4 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      plVar2 = plStack_38;
      if ((uVar4 & 1) == 0) {
        if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02348418 to 0244841f has its CatchHandler @ 02348468 */
          FUN_021f06a0();
        }
        lVar6 = *plStack_38;
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x13) * 0x10 + 0x138);
              goto LAB_02348398;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)puVar1,0x13);
LAB_02348398:
        lVar6 = (*(code *)*puVar5)(plVar2,uVar8,puVar5[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                              (lVar6,*(undefined8 *)PTR_DAT_049b5758);
                    /* catch() { ... } // from try @ 02348420 with catch @ 023483bc */
                    /* try { // try from 023483d0 to 024483d7 has its CatchHandler @ 02348460 */
        uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                          (&uStack_40,*(undefined8 *)PTR_DAT_049b5750);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 10) = uStack_40;
          thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 023483f0 to 024483f3 has its CatchHandler @ 0234845c */
          FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b58a8);
          return;
                    /* try { // try from 0234840c to 02448413 has its CatchHandler @ 02348464 */
        }
        goto LAB_02348238;
      }
    }
  }
  uVar3 = 0;
LAB_02348300:
  puVar1 = PTR_DAT_049b5570;
  *param_1 = -2;
  uStack_28 = CONCAT71(uStack_28._1_7_,uVar3) & 0xffffffffffffff01;
  FUN_0235bed4(param_1 + 2,&uStack_28,*(undefined8 *)puVar1);
  return;
}

