/* IL2CPP: TagCarrier$$ProcessFeature
void TagCarrier__ProcessFeature (TagCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$ProcessFeature
   void TagCarrier__ProcessFeature (TagCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void TagCarrier__ProcessFeature_24ac438(long param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
  if (param_2 != 0x18) {
    return;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar6 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar6 != 0) {
      lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                 *(undefined4 *)(lVar10 + 0x14),lVar6,0);
      uVar7 = Level__GetColor_2555ca8(param_1 + 0xa8,param_3,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
      GameBehaviourBase__InjectColorType_24f5670
                (0,0,0,0,param_1,uVar7,*(undefined8 *)(param_1 + 0xa0),0);
      uVar7 = *(undefined8 *)(param_1 + 0xf8);
      if ((bRam0000000004f4bd1b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c83b8,uVar7,0);
        FUN_021f03f8(PTR_DAT_049c83c0);
        FUN_021f03f8(PTR_DAT_049c83c8);
        FUN_021f03f8(PTR_DAT_049c83d0);
        FUN_021f03f8(PTR_DAT_049c83d8);
        FUN_021f03f8(PTR_DAT_049c83e0);
        bRam0000000004f4bd1b = 1;
      }
      lVar6 = *(long *)(param_1 + 0x50);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      if (lVar6 == 0) {
LAB_025f4f44:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c22a8
                  (param_1,lVar6,*(undefined8 *)PTR_DAT_049c83b8);
        lVar6 = *(long *)(param_1 + 0x50);
        if (lVar6 == 0) goto LAB_025f4f44;
      }
      puVar5 = PTR_DAT_049c83d0;
      puVar4 = PTR_DAT_049c83c8;
      puVar3 = PTR_DAT_049c83c0;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar6,&uStack_78,*(undefined8 *)PTR_DAT_049c83d8);
      while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_78,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        lVar11 = *(long *)puVar5;
        lVar10 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar6 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_02229718();
          lVar10 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar9 = thunk_FUN_0224e54c(&uStack_78,
                                   *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_38,uVar9,uVar1);
        GameBehaviourBase__InjectColorType_24f4fa0(0,0,0,0,param_1,uVar7,uStack_38);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_78,*(undefined8 *)puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

