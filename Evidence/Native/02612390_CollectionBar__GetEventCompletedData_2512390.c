/* IL2CPP: CollectionBar$$GetEventCompletedData
LiveOpsEventCompletedArgs_o CollectionBar__GetEventCompletedData (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$GetEventCompletedData
   LiveOpsEventCompletedArgs_o CollectionBar__GetEventCompletedData (CollectionBar_o* __this, const
   MethodInfo* method); */

void CollectionBar__GetEventCompletedData_2512390(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_24;
  
  if ((bRam0000000004f4bdf8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4bdf8 = 1;
  }
  lVar4 = CollectionBar__GetCurrentProgressData_2511d90(param_2);
  puVar3 = PTR_DAT_049c2cf0;
  puVar2 = PTR_DAT_049b3c20;
  if (lVar4 != 0) {
    uStack_48 = *(undefined8 *)(lVar4 + 0x38);
    uStack_50 = *(undefined8 *)(lVar4 + 0x30);
    uStack_38 = *(undefined8 *)(lVar4 + 0x48);
    uStack_40 = *(undefined8 *)(lVar4 + 0x40);
    uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_50,0);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
      uVar6 = thunk_FUN_0224e54c(lVar4,*(undefined8 *)(*plVar7 + 0x80));
      func_0x04608620(&uStack_58,uVar6,uVar1);
      iStack_24 = (int)uStack_58 + -1;
    }
    else {
      plVar7 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
      uVar6 = thunk_FUN_0224e54c(lVar4,*(undefined8 *)(*plVar7 + 0x80));
      func_0x04608620(&uStack_58,uVar6,uVar1);
      iStack_24 = (int)uStack_58;
    }
    uStack_58 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_58,&iStack_24,*(undefined8 *)puVar2);
    *param_1 = uStack_58;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

