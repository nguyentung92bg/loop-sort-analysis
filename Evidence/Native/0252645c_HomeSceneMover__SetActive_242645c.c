/* IL2CPP: HomeSceneMover$$SetActive
void HomeSceneMover__SetActive (HomeSceneMover_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMover$$SetActive
   void HomeSceneMover__SetActive (HomeSceneMover_o* __this, bool active, const MethodInfo* method);
    */

void HomeSceneMover__SetActive_242645c(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025263a8 with catch @ 0252645c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 02526448 with catch @ 0252645c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025263fc with catch @ 02526460
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0252644c with catch @ 02526460
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02526368 with catch @ 02526464
                        */
  if ((bRam0000000004f4b799 & 1) == 0) {
                    /* try { // try from 02526480 to 02626483 has its CatchHandler @ 0252648c */
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b799 = 1;
  }
                    /* catch() { ... } // from try @ 02526480 with catch @ 0252648c */
                    /* try { // try from 02526490 to 02626497 has its CatchHandler @ 025264a0 */
                    /* try { // try from 02526498 to 026264a3 has its CatchHandler @ 0252630c */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x18),0),
     puVar1 = PTR_DAT_049b3b98, lVar2 != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02526490 with catch @ 025264a0
                        */
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,param_2 & 1,0);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x80),0),
       lVar2 != 0)) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,param_2 & 1,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar4,param_2 & 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

