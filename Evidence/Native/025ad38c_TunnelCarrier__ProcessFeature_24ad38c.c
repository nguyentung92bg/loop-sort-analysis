/* IL2CPP: TunnelCarrier$$ProcessFeature
void TunnelCarrier__ProcessFeature (TunnelCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrier$$ProcessFeature
   void TunnelCarrier__ProcessFeature (TunnelCarrier_o* __this, int32_t featureType,
   System_String_o* data, const MethodInfo* method); */

void TunnelCarrier__ProcessFeature_24ad38c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  if ((bRam0000000004f4bb44 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6898);
    FUN_021f03f8(PTR_DAT_049c68a8);
    FUN_021f03f8(PTR_DAT_049c68b0);
                    /* try { // try from 025ad3d8 to 026ad3db has its CatchHandler @ 025ad3e8 */
                    /* try { // try from 025ad3dc to 026ad3df has its CatchHandler @ 025ad3e0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad3dc with catch @ 025ad3e0
                       try { // try from 025ad3e0 to 026ad40f has its CatchHandler @ 025ad244 */
    FUN_021f03f8(PTR_DAT_049c68c8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad36c with catch @ 025ad3e4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad3d8 with catch @ 025ad3e8
                        */
    bRam0000000004f4bb44 = 1;
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad304 with catch @ 025ad3ec
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad348 with catch @ 025ad3ec
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad328 with catch @ 025ad3f0
                        */
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad2d0 with catch @ 025ad3f4
                        */
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x1b8) =
         *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x154);
    puVar6 = PTR_DAT_049c68b0;
    puVar5 = PTR_DAT_049c68a8;
    puVar4 = PTR_DAT_049c6898;
                    /* try { // try from 025ad410 to 026ad413 has its CatchHandler @ 025ad420 */
    if (*(long *)(param_1 + 0xa8) != 0) {
                    /* catch() { ... } // from try @ 025ad410 with catch @ 025ad420 */
                    /* try { // try from 025ad424 to 026ad42b has its CatchHandler @ 025ad434 */
                    /* try { // try from 025ad42c to 026ad437 has its CatchHandler @ 025ad244 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ad424 with catch @ 025ad434
                        */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0xa8),&uStack_88,*(undefined8 *)PTR_DAT_049c68c8);
      puVar3 = PTR_DAT_049bbf90;
      puStack_68 = puStack_80;
      uStack_70 = uStack_88;
      uStack_60 = uStack_78;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_70,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
        lVar11 = *(long *)puVar6;
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar9 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                    *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&lStack_48,uVar10,uVar1);
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = UnityEngine_Component__get_transform_3c18724(lStack_48,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(puVar3);
          cRam0000000004f4a190 = '\x01';
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar9,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0xb8) != 0) {
        Carrier__DisableTransferMotion_2409d70(*(long *)(param_1 + 0xb8),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

