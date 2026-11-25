/* IL2CPP: LiveOpsModule$$.ctor
void LiveOpsModule___ctor (LiveOpsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$.ctor
   void LiveOpsModule___ctor (LiveOpsModule_o* __this, const MethodInfo* method); */

void LiveOpsModule___ctor_2547e38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_049ca7e8;
  puVar3 = PTR_DAT_049ca7e0;
  puVar2 = PTR_DAT_049c91d8;
  puVar1 = PTR_DAT_049c91d0;
  if ((bRam0000000004f4c01d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca7f0);
    FUN_021f03f8(PTR_DAT_049ca7e8);
    FUN_021f03f8(PTR_DAT_049ca7e0);
    FUN_021f03f8(PTR_DAT_049c91d8);
    FUN_021f03f8(PTR_DAT_049c91d0);
    bRam0000000004f4c01d = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar5);
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar6,*(undefined8 *)puVar4);
  puVar1 = PTR_DAT_049ca7f0;
  if (lVar6 != 0) {
    uStack_38 = 0x6e;
    uStack_34 = 0x13;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)PTR_DAT_049ca7f0);
    uStack_38 = 100;
    uStack_34 = 0xf;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 99;
    uStack_34 = 0x18;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0x5a;
    uStack_34 = 0xd;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0x5a;
    uStack_34 = 0x15;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0x50;
    uStack_34 = 0x10;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0x31;
    uStack_34 = 0xc;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0x30;
    uStack_34 = 0x14;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0xffffff9c;
    uStack_34 = 0xe;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0xffffff38;
    uStack_34 = 0xb;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    uStack_38 = 0xffffff2e;
    uStack_34 = 0x12;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar6,&uStack_34,&uStack_38,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x40) = lVar6;
    thunk_FUN_021f190c((long *)(param_1 + 0x40),lVar6);
    ModuleBase___ctor_252fad0(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

