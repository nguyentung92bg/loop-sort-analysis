/* IL2CPP: Carrier$$OnRent
void Carrier__OnRent (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$OnRent
   void Carrier__OnRent (Carrier_o* __this, const MethodInfo* method); */

void Carrier__OnRent_2408210(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_049c2850;
  if ((bRam0000000004f4b6c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1640);
    FUN_021f03f8(PTR_DAT_049c1648);
    FUN_021f03f8(PTR_DAT_049c1650);
    FUN_021f03f8(PTR_DAT_049c2850);
    FUN_021f03f8(PTR_DAT_049c1658);
    FUN_021f03f8(PTR_DAT_049c2858);
    FUN_021f03f8(PTR_DAT_049c1960);
    bRam0000000004f4b6c6 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  GameBehaviourBase__RegisterView_object__261a35c(param_1,*(undefined8 *)puVar3);
  GameBehaviourBase__InjectMaterial_24f5a90(param_1,*(undefined8 *)(param_1 + 0x1a8),0);
  Carrier__ApplyOpenBackMotion_24076b0(param_1,1);
  lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (*(undefined8 *)(param_1 + 0xe8),0xa35119b7,0);
  if ((lVar8 != 0) && (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0), lVar8 != 0))
  {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
    puVar7 = PTR_DAT_049c2858;
    puVar6 = PTR_DAT_049c1960;
    puVar5 = PTR_DAT_049c1650;
    puVar4 = PTR_DAT_049c1648;
    puVar3 = PTR_DAT_049c1640;
    if (*(long *)(param_1 + 0x120) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0x120),&uStack_78,*(undefined8 *)PTR_DAT_049c1658);
      uStack_50 = uStack_68;
      puStack_58 = puStack_70;
      uStack_60 = uStack_78;
      uStack_78 = 0;
      puStack_70 = &uStack_60;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_60,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
        lVar12 = *(long *)puVar5;
        lVar10 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar8 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar10 = *(long *)(lVar12 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_48,uVar11,uVar1);
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lStack_48,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0xf0) != 0) {
        UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 0xf0),0,0);
        uVar11 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar7);
        *(undefined8 *)(param_1 + 0x1d0) = uVar11;
        thunk_FUN_021f190c(param_1 + 0x1d0,uVar11);
        uVar11 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar6);
        *(undefined8 *)(param_1 + 0x1d8) = uVar11;
        thunk_FUN_021f190c(param_1 + 0x1d8,uVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

