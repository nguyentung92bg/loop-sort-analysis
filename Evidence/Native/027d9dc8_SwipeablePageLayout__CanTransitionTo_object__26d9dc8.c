/* IL2CPP: SwipeablePageLayout$$CanTransitionTo<object>
bool SwipeablePageLayout__CanTransitionTo_object_ (SwipeablePageLayout_o* __this, const MethodInfo_26D9DC8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$CanTransitionTo<object>
   bool SwipeablePageLayout__CanTransitionTo_object_ (SwipeablePageLayout_o* __this, const
   MethodInfo_26D9DC8* method); */

bool SwipeablePageLayout__CanTransitionTo_object__26d9dc8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 027d9d80 with catch @ 027d9ddc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 027d9c5c with catch @ 027d9de0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 027d9c90 with catch @ 027d9de4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 027d9b4c with catch @ 027d9de8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 027d9b94 with catch @ 027d9dec
                        */
  if ((*(long *)(param_2 + 0x38) == 0) &&
     (FUN_021f03f8(PTR_DAT_049c4620), *(long *)(param_2 + 0x38) == 0)) {
    FUN_02229774(param_2);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 027d9e08 to 028d9e0b has its CatchHandler @ 027d9e18 */
    lVar3 = *(long *)(param_1 + 0x18);
    uVar2 = Monitors__Get_object__26889d0
                      (*(long *)(param_1 + 0x10),**(undefined8 **)(param_2 + 0x38));
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 027d9e08 with catch @ 027d9e18 */
                    /* try { // try from 027d9e1c to 028d9e23 has its CatchHandler @ 027d9e44 */
                    /* try { // try from 027d9e24 to 028d9e47 has its CatchHandler @ 027d9954 */
      iVar1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                        (lVar3,uVar2,*(undefined8 *)PTR_DAT_049c4620);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d9e1c with catch @ 027d9e44
                        */
      if ((bRam0000000004f4b89d & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c45c0,iVar1,0);
        bRam0000000004f4b89d = 1;
      }
      if (-1 < iVar1) {
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (iVar1 < *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
          return *(int *)(param_1 + 0x28) != iVar1;
        }
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 027d9e48 to 028d9fa3 has its CatchHandler @ 027d9e48
                       catch() { ... } // from try @ 027d9e48 with catch @ 027d9e48
                       catch() { ... } // from try @ 027da060 with catch @ 027d9e48
                       catch() { ... } // from try @ 027da09c with catch @ 027d9e48
                       catch() { ... } // from try @ 027da178 with catch @ 027d9e48
                       catch() { ... } // from try @ 027da210 with catch @ 027d9e48 */
  FUN_021f06a0();
}

