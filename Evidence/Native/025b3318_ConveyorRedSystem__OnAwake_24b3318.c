/* IL2CPP: ConveyorRedSystem$$OnAwake
void ConveyorRedSystem__OnAwake (ConveyorRedSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorRedSystem$$OnAwake
   void ConveyorRedSystem__OnAwake (ConveyorRedSystem_o* __this, const MethodInfo* method); */

void ConveyorRedSystem__OnAwake_24b3318
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 *puStack_48;
  long lStack_38;
  
  if ((bRam0000000004f4bb74 & 1) == 0) {
                    /* try { // try from 025b3340 to 026b334b has its CatchHandler @ 025b33ec */
    FUN_021f03f8(PTR_DAT_049c1530);
    FUN_021f03f8(PTR_DAT_049c1538);
    FUN_021f03f8(PTR_DAT_049c6ac0);
    FUN_021f03f8(PTR_DAT_049c68f0);
                    /* try { // try from 025b336c to 026b336f has its CatchHandler @ 025b33e0 */
    FUN_021f03f8(PTR_DAT_049c6be0);
    FUN_021f03f8(PTR_DAT_049bcb70);
                    /* try { // try from 025b338c to 026b3393 has its CatchHandler @ 025b33e4 */
    FUN_021f03f8(PTR_DAT_049c1570);
                    /* try { // try from 025b3394 to 026b33d7 has its CatchHandler @ 025b3278 */
    FUN_021f03f8(PTR_DAT_049c6ab8);
    bRam0000000004f4bb74 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lStack_68 = 0;
  SystemBase__OnAwake_2555e24(param_5,0);
  if (*(long *)(param_5 + 0x30) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (*(long *)(param_5 + 0x30),&uStack_50,*(undefined8 *)PTR_DAT_049c6ac0);
                    /* try { // try from 025b33d8 to 026b33db has its CatchHandler @ 025b33f0 */
                    /* try { // try from 025b33dc to 026b33df has its CatchHandler @ 025b33e8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b336c with catch @ 025b33e0
                       try { // try from 025b33e0 to 026b340f has its CatchHandler @ 025b3278 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b338c with catch @ 025b33e4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b33dc with catch @ 025b33e8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b3340 with catch @ 025b33ec
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b33d8 with catch @ 025b33f0
                        */
    if ((uStack_50 != 0) &&
       (lVar5 = RendererPropertyRegistry__GetTargets_249c98c
                          (uStack_50,*(undefined8 *)PTR_DAT_049c6ab8,0), lVar5 != 0)) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b3308 with catch @ 025b33f4
                        */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar5,0,&uStack_50,*(undefined8 *)PTR_DAT_049c6be0);
      uVar3 = uStack_50;
      puVar2 = PTR_DAT_049c1538;
      puVar1 = PTR_DAT_049c1530;
                    /* try { // try from 025b3410 to 026b3413 has its CatchHandler @ 025b3420 */
      if (puStack_48 != (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 025b3410 with catch @ 025b3420 */
                    /* try { // try from 025b3424 to 026b342b has its CatchHandler @ 025b3434 */
                    /* try { // try from 025b342c to 026b3437 has its CatchHandler @ 025b3278 */
        uVar7 = uStack_50._4_4_;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b3424 with catch @ 025b3434
                        */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (puStack_48,0,&uStack_50,*(undefined8 *)PTR_DAT_049c68f0);
        uVar4 = uStack_50;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        puVar2 = PTR_DAT_049c1570;
        auStack_60 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                               (&lStack_68,*(undefined8 *)puVar1);
        puStack_48 = auStack_60;
        uStack_50 = 0;
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Renderer__GetSharedMaterials_3bddd80(uVar4,lStack_68,0);
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lStack_68,uVar7,&lStack_38,*(undefined8 *)PTR_DAT_049bcb70);
        if (lStack_38 != 0) {
          uVar7 = UnityEngine_Material__GetColor_3be6388(lStack_38,uVar3 & 0xffffffff,0);
          *(undefined4 *)(param_5 + 0x40) = uVar7;
          *(undefined4 *)(param_5 + 0x44) = param_2;
          uVar6 = *(undefined8 *)puVar2;
          *(undefined4 *)(param_5 + 0x48) = param_3;
          *(undefined4 *)(param_5 + 0x4c) = param_4;
          *(undefined8 *)(param_5 + 0x58) = *(undefined8 *)(param_5 + 0x48);
          *(undefined8 *)(param_5 + 0x50) = *(undefined8 *)(param_5 + 0x40);
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_60,uVar6);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

