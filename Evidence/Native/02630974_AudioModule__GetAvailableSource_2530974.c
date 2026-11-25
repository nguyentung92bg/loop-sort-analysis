/* IL2CPP: AudioModule$$GetAvailableSource
UnityEngine_AudioSource_o* AudioModule__GetAvailableSource (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$GetAvailableSource
   UnityEngine_AudioSource_o* AudioModule__GetAvailableSource (AudioModule_o* __this, const
   MethodInfo* method); */

long AudioModule__GetAvailableSource_2530974(long param_1)

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
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bf19 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ed0);
    FUN_021f03f8(PTR_DAT_049c9ed8);
    FUN_021f03f8(PTR_DAT_049c9ee0);
    FUN_021f03f8(PTR_DAT_049c7178);
    FUN_021f03f8(PTR_DAT_049c9ef8);
    FUN_021f03f8(PTR_DAT_049c9ee8);
    FUN_021f03f8(PTR_DAT_049c9f00);
    bRam0000000004f4bf19 = 1;
  }
  puVar5 = PTR_DAT_049c9ee0;
  puVar4 = PTR_DAT_049c9ed8;
  puVar3 = PTR_DAT_049c9ed0;
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x38),&uStack_68,*(undefined8 *)PTR_DAT_049c9ee8);
    uStack_40 = uStack_58;
    puStack_48 = puStack_60;
    uStack_50 = uStack_68;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
    while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_50,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
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
      uVar9 = thunk_FUN_0224e54c(&uStack_50,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_38,uVar9,uVar1);
      lVar8 = lStack_38;
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = UnityEngine_AudioSource__get_isPlaying_3bbd384(lStack_38,0);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_50,*(undefined8 *)puVar3);
        return lVar8;
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_50,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x38) != 0) {
      if (0x1d < *(int *)(*(long *)(param_1 + 0x38) + 0x18)) {
        return 0;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar8 = UnityEngine_GameObject__AddComponent_object__261a774
                          (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c7178);
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_02333498(*(long *)(param_1 + 0x38),lVar8,*(undefined8 *)PTR_DAT_049c9ef8);
          return lVar8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

