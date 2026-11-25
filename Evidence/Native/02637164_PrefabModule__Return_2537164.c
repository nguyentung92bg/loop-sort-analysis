/* IL2CPP: PrefabModule$$Return
void PrefabModule__Return (PrefabModule_o* __this, UnityEngine_GameObject_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Return
   void PrefabModule__Return (PrefabModule_o* __this, UnityEngine_GameObject_o* instance, const
   MethodInfo* method); */

void PrefabModule__Return_2537164(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf68 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca220);
    FUN_021f03f8(PTR_DAT_049ca228);
    FUN_021f03f8(PTR_DAT_049ca230);
    FUN_021f03f8(PTR_DAT_049ca238);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049ca240);
    bRam0000000004f4bf68 = 1;
  }
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 02637218 to 0273721f has its CatchHandler @ 02637344 */
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x18),param_2,&lStack_38,*(undefined8 *)PTR_DAT_049ca230)
    ;
    if ((uVar2 & 1) == 0) {
      return;
    }
                    /* try { // try from 02637238 to 02737283 has its CatchHandler @ 02637348 */
    if ((param_2 != 0) && (UnityEngine_GameObject__SetActive_3c1ce34(param_2,0,0), lStack_38 != 0))
    {
      System_Collections_Generic_Stack___Il2CppFullySharedGenericType___Push_29a2df8
                (lStack_38,param_2,*(undefined8 *)PTR_DAT_049ca240);
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_049ca220);
        if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02637284 to 0273732b has its CatchHandler @ 026370d8 */
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                    (*(long *)(param_1 + 0x30),param_2,&uStack_28,*(undefined8 *)PTR_DAT_049ca238);
          lVar3 = UnityEngine_GameObject__get_transform_3c1ca74(param_2,0);
          if (lVar3 != 0) {
            UnityEngine_Transform__SetParent_3c2e01c(lVar3,uStack_28,0);
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a233 = '\x01';
            }
            puVar4 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            UnityEngine_Transform__set_position_3c2d61c(*puVar4,puVar4[1],puVar4[2],lVar3,0);
            if (cRam0000000004f4a191 == '\0') {
              FUN_021f03f8(PTR_DAT_049bc158);
              cRam0000000004f4a191 = '\x01';
            }
                    /* try { // try from 0263732c to 0273732f has its CatchHandler @ 02637340 */
                    /* try { // try from 02637334 to 02737337 has its CatchHandler @ 0263733c */
            puVar4 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
                    /* try { // try from 02637338 to 0273735b has its CatchHandler @ 026370d8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02637334 with catch @ 0263733c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263732c with catch @ 02637340
                        */
            UnityEngine_Transform__set_rotation_3c2d86c
                      (*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar3,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02637218 with catch @ 02637344
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02637238 with catch @ 02637348
                        */
            if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 0263735c to 0273735f has its CatchHandler @ 026373b0 */
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                        (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)PTR_DAT_049ca228);
                    /* try { // try from 02637360 to 027373b3 has its CatchHandler @ 026370d8 */
              PrefabModuleCallbackHelper__InvokeOnReturn_253838c(param_2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

