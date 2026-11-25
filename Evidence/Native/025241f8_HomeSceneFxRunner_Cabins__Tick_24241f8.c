/* IL2CPP: HomeSceneFxRunner.Cabins$$Tick
void HomeSceneFxRunner_Cabins__Tick (HomeSceneFxRunner_Cabins_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Cabins$$Tick
   void HomeSceneFxRunner_Cabins__Tick (HomeSceneFxRunner_Cabins_o* __this, float t, const
   MethodInfo* method); */

void HomeSceneFxRunner_Cabins__Tick_24241f8
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  if ((bRam0000000004f4b793 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32e0);
    FUN_021f03f8(PTR_DAT_049c32e8);
    FUN_021f03f8(PTR_DAT_049c32f0);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c32f8);
    bRam0000000004f4b793 = 1;
  }
  lVar9 = *(long *)(param_5 + 0x10);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (lVar9 != 0) {
    uVar13 = *(undefined4 *)(lVar9 + 0x50);
    fVar11 = 120.0;
    if (0.0 <= *(float *)(lVar9 + 0x44)) {
      fVar11 = *(float *)(lVar9 + 0x44);
    }
    if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025242b4 to 026242ff has its CatchHandler @ 025242b4
                       catch() { ... } // from try @ 025242b4 with catch @ 025242b4
                       catch() { ... } // from try @ 0252430c with catch @ 025242b4
                       catch() { ... } // from try @ 02524374 with catch @ 025242b4
                       catch() { ... } // from try @ 0252442c with catch @ 025242b4 */
    fVar11 = (float)HomeSceneView__Phase_24280b4(param_1,uVar13,fVar11,0);
    lVar9 = *(long *)(param_5 + 0x18);
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar11 * 360.0 * _UNK_013aa730,0);
    if (lVar9 != 0) {
      UnityEngine_Transform__set_localRotation_3c2d9f0(lVar9,0);
      uVar12 = 0;
                    /* try { // try from 02524300 to 0262430b has its CatchHandler @ 02524344 */
      fVar11 = fVar11 * 360.0 * _UNK_013aa948;
                    /* try { // try from 0252430c to 0262435b has its CatchHandler @ 025242b4 */
      uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar11,0);
      puVar5 = PTR_DAT_049c32f0;
      puVar4 = PTR_DAT_049c32e8;
      puVar3 = PTR_DAT_049c32e0;
      if (*(long *)(param_5 + 0x20) != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02524300 with catch @ 02524344
                        */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_5 + 0x20),&uStack_68,*(undefined8 *)PTR_DAT_049c32f8);
                    /* try { // try from 0252435c to 02624373 has its CatchHandler @ 02524424 */
        while( true ) {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_68,*(undefined8 *)puVar4);
          if ((uVar6 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_68,*(undefined8 *)puVar3);
                    /* try { // try from 02524414 to 02624423 has its CatchHandler @ 02524424 */
                    /* catch() { ... } // from try @ 0252435c with catch @ 02524424
                       catch() { ... } // from try @ 02524414 with catch @ 02524424 */
            return;
          }
          lVar10 = *(long *)puVar5;
                    /* try { // try from 02524374 to 02624413 has its CatchHandler @ 025242b4 */
          lVar7 = *(long *)(lVar10 + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
          lVar9 = lVar7;
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
            lVar7 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
          }
          uVar8 = thunk_FUN_0224e54c(&uStack_68,
                                     *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60
                                    );
          func_0x04608620(&lStack_28,uVar8,uVar1);
          if (lStack_28 == 0) break;
          UnityEngine_Transform__set_localRotation_3c2d9f0(uVar13,uVar12,fVar11,param_4,lStack_28,0)
          ;
        }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02524428 to 0262442b has its CatchHandler @ 02524434 */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0252442c to 02624437 has its CatchHandler @ 025242b4 */
  FUN_021f06a0();
}

