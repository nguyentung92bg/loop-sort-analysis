/* IL2CPP: ScaleEffect$$Awake
void ScaleEffect__Awake (ScaleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ScaleEffect$$Awake
   void ScaleEffect__Awake (ScaleEffect_o* __this, const MethodInfo* method); */

void ScaleEffect__Awake_257308c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c2ef0;
  if ((bRam0000000004f4c1ea & 1) == 0) {
                    /* try { // try from 026730b8 to 0277320f has its CatchHandler @ 026730b8
                       catch() { ... } // from try @ 026730b8 with catch @ 026730b8
                       catch() { ... } // from try @ 0267325c with catch @ 026730b8
                       catch() { ... } // from try @ 026732e8 with catch @ 026730b8
                       catch() { ... } // from try @ 0267340c with catch @ 026730b8
                       catch() { ... } // from try @ 02673444 with catch @ 026730b8
                       catch() { ... } // from try @ 02673468 with catch @ 026730b8 */
    FUN_021f03f8(PTR_DAT_049c2ef0);
    bRam0000000004f4c1ea = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_4,&lStack_28,*(undefined8 *)puVar1);
  plVar2 = (long *)(param_4 + 0x30);
  *plVar2 = lStack_28;
  thunk_FUN_021f190c(plVar2);
  if (*plVar2 != 0) {
    uVar3 = UnityEngine_Transform__get_localScale_3c2dd20(*plVar2,0);
    *(undefined4 *)(param_4 + 0x38) = uVar3;
    *(undefined4 *)(param_4 + 0x3c) = param_2;
    *(undefined4 *)(param_4 + 0x40) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

