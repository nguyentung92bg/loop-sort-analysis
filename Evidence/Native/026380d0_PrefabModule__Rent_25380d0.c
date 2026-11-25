/* IL2CPP: PrefabModule$$Rent
UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o* original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Rent
   UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o*
   original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

long PrefabModule__Rent_25380d0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_98;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 026380f8 to 02738107 has its CatchHandler @ 026385a0 */
                    /* try { // try from 02638110 to 0273811b has its CatchHandler @ 0263859c */
                    /* try { // try from 02638124 to 02738127 has its CatchHandler @ 02638598 */
                    /* try { // try from 0263812c to 02738137 has its CatchHandler @ 02638594 */
  if ((bRam0000000004f4bf67 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca248);
                    /* try { // try from 0263814c to 0273814f has its CatchHandler @ 02638578 */
    FUN_021f03f8(PTR_DAT_049ca250);
                    /* try { // try from 02638154 to 0273815f has its CatchHandler @ 02638590 */
    FUN_021f03f8(PTR_DAT_049ca2f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049ca258);
                    /* try { // try from 02638174 to 02738227 has its CatchHandler @ 026385c4 */
    bRam0000000004f4bf67 = 1;
  }
  lStack_98 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(param_9,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
    uVar9 = thunk_FUN_0222ca34();
                    /* try { // try from 02638358 to 0273835b has its CatchHandler @ 02638588 */
                    /* try { // try from 02638360 to 0273836b has its CatchHandler @ 026385b0 */
    uVar10 = thunk_FUN_02256840(PTR_DAT_049ca260);
    System_ArgumentNullException___ctor_30655c4(uVar9,uVar10,0);
    uVar10 = thunk_FUN_02256840(PTR_DAT_049ca2f8);
                    /* try { // try from 02638380 to 02738433 has its CatchHandler @ 026385c8 */
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar9,uVar10);
  }
  lVar7 = PrefabModule__GetOrCreatePool_25375e0(param_8,param_9);
  puVar5 = PTR_DAT_049ca2f0;
  puVar4 = PTR_DAT_049ca258;
  puVar3 = PTR_DAT_049ca250;
  puVar2 = PTR_DAT_049ca248;
  if (lVar7 != 0) {
    do {
      uVar6 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___TryPop_29a2c0c
                        (lVar7,&lStack_98,*(undefined8 *)puVar4);
      lVar8 = lStack_98;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lStack_98 = UnityEngine_Object__Instantiate_object__2695f50
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,
                               param_10,*(undefined8 *)puVar5);
        goto LAB_026382c4;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(lVar8,0,0);
    } while ((uVar6 & 1) == 0);
                    /* try { // try from 02638234 to 027382bb has its CatchHandler @ 026385cc */
    if ((((lStack_98 != 0) &&
         (lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_98,0), lVar8 != 0)) &&
        (UnityEngine_Transform__SetParent_3c2e01c(lVar8,param_10,0), lStack_98 != 0)) &&
       ((lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_98,0), lVar8 != 0 &&
        (UnityEngine_Transform__SetPositionAndRotation_3c2e2a0
                   (param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar8,0), lStack_98 != 0
        )))) {
      UnityEngine_GameObject__SetActive_3c1ce34(lStack_98,1,0);
LAB_026382c4:
                    /* try { // try from 026382c8 to 027382d3 has its CatchHandler @ 0263858c */
      if (*(long *)(param_8 + 0x18) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (*(long *)(param_8 + 0x18),lStack_98,lVar7,*(undefined8 *)puVar3);
        uVar9 = PrefabModule__GetOrCreatePoolParent_25376c0(param_8,param_9);
        if (*(long *)(param_8 + 0x30) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (*(long *)(param_8 + 0x30),lStack_98,uVar9,*(undefined8 *)puVar2);
                    /* try { // try from 02638304 to 02738313 has its CatchHandler @ 026385c0 */
          PrefabModuleCallbackHelper__InvokeOnRent_25378a8(lStack_98);
                    /* try { // try from 0263831c to 02738327 has its CatchHandler @ 026385bc */
                    /* try { // try from 02638330 to 02738333 has its CatchHandler @ 026385b8 */
                    /* try { // try from 02638338 to 02738343 has its CatchHandler @ 026385b4 */
          return lStack_98;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

