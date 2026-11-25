/* IL2CPP: HomeSceneSpawnerRunner$$Tick
void HomeSceneSpawnerRunner__Tick (HomeSceneSpawnerRunner_o* __this, float clock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$Tick
   void HomeSceneSpawnerRunner__Tick (HomeSceneSpawnerRunner_o* __this, float clock, const
   MethodInfo* method); */

void HomeSceneSpawnerRunner__Tick_242b088(float param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4b7b2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c35a8);
    FUN_021f03f8(PTR_DAT_049c35b0);
    FUN_021f03f8(PTR_DAT_049c35b8);
    FUN_021f03f8(PTR_DAT_049c35c0);
    bRam0000000004f4b7b2 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    HomeSceneSpawnerRunner__FlockStep_242bb48(param_1,param_2);
  }
  else {
    HomeSceneSpawnerRunner__LaneStep_242b334();
  }
  puVar5 = PTR_DAT_049c35b8;
  puVar4 = PTR_DAT_049c35b0;
  puVar3 = PTR_DAT_049c35a8;
  if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x20),&uStack_78,*(undefined8 *)PTR_DAT_049c35c0);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    do {
      while( true ) {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_60,*(undefined8 *)puVar4);
          if ((uVar6 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_60,*(undefined8 *)puVar3);
            return;
          }
          lVar10 = *(long *)puVar5;
          lVar7 = *(long *)(lVar10 + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
          lVar8 = lVar7;
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
            lVar7 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
          }
          uVar9 = thunk_FUN_0224e54c(&uStack_60,
                                     *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60
                                    );
          func_0x04608620(&lStack_48,uVar9,uVar1);
          lVar8 = lStack_48;
          if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (*(char *)(lStack_48 + 0x4c) == '\0');
        fVar11 = (param_1 - *(float *)(lStack_48 + 0x44)) / *(float *)(lStack_48 + 0x48);
        if (fVar11 < 1.0) break;
        *(undefined1 *)(lStack_48 + 0x4c) = 0;
        if (*(long *)(lStack_48 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        HomeSceneMover__SetActive_242645c(*(long *)(lStack_48 + 0x10),0,0);
      }
    } while (fVar11 < 0.0);
    if (*(long *)(lStack_48 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = HomeSceneMover__get_IsActive_24244a4(*(long *)(lStack_48 + 0x10),0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      HomeSceneMover__SetActive_242645c(*(long *)(lVar8 + 0x10),1,0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) break;
    HomeSceneMover__EvaluatePath_2425acc(fVar11,*(long *)(lVar8 + 0x10),0);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HomeSceneMover__EvaluateLocal_2426000(param_1,*(long *)(lVar8 + 0x10),0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

