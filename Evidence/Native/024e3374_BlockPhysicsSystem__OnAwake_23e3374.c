/* IL2CPP: BlockPhysicsSystem$$OnAwake
void BlockPhysicsSystem__OnAwake (BlockPhysicsSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockPhysicsSystem$$OnAwake
   void BlockPhysicsSystem__OnAwake (BlockPhysicsSystem_o* __this, const MethodInfo* method); */

void BlockPhysicsSystem__OnAwake_23e3374(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
                    /* try { // try from 024e3374 to 025e33fb has its CatchHandler @ 024e3154 */
  if ((bRam0000000004f4b5ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1850);
    FUN_021f03f8(PTR_DAT_049c1858);
    FUN_021f03f8(PTR_DAT_049c1860);
    FUN_021f03f8(PTR_DAT_049c1868);
    bRam0000000004f4b5ec = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  SystemBase__OnAwake_2555e24(param_1,0);
  puVar4 = PTR_DAT_049c1868;
  puVar3 = PTR_DAT_049c1860;
  puVar2 = PTR_DAT_049c1858;
  puVar1 = PTR_DAT_049c1850;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 024e33fc to 025e33ff has its CatchHandler @ 024e35d8 */
                    /* try { // try from 024e3404 to 025e3407 has its CatchHandler @ 024e340c */
                    /* try { // try from 024e3408 to 025e3427 has its CatchHandler @ 024e3154 */
                    /* catch() { ... } // from try @ 024e335c with catch @ 024e340c
                       catch() { ... } // from try @ 024e3404 with catch @ 024e340c */
    Scellecs_Morpeh_World__get_Filter_32bc7b0(&uStack_98,*(long *)(param_1 + 0x18),0);
                    /* try { // try from 024e3428 to 025e343f has its CatchHandler @ 024e35c0 */
    uStack_50 = uStack_78;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_c0,&uStack_70,*(undefined8 *)puVar1);
    uStack_50 = uStack_a0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_e8,&uStack_70,*(undefined8 *)puVar3);
                    /* try { // try from 024e3464 to 025e3467 has its CatchHandler @ 024e35b8 */
                    /* try { // try from 024e3474 to 025e3487 has its CatchHandler @ 024e35bc */
    uStack_50 = uStack_c8;
    uStack_68 = uStack_e0;
    uStack_70 = uStack_e8;
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    Scellecs_Morpeh_FilterBuilder__With___Il2CppFullySharedGenericStructType__25f8880
              (&uStack_110,&uStack_70,*(undefined8 *)puVar2);
                    /* try { // try from 024e3490 to 025e34e7 has its CatchHandler @ 024e35d0 */
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_50 = uStack_f0;
    uVar5 = Scellecs_Morpeh_FilterBuilder__Build_32b99e0(&uStack_70,0);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    thunk_FUN_021f190c();
    uVar5 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x68),uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

