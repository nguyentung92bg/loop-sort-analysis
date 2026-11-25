/* IL2CPP: TimeProvider$$.cctor
void TimeProvider___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeProvider$$.cctor
   void TimeProvider___cctor (const MethodInfo* method); */

void TimeProvider___cctor_24f96b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c8848;
                    /* try { // try from 025f96cc to 026f96d3 has its CatchHandler @ 025f9810 */
  if ((bRam0000000004f4bd39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8850);
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* try { // try from 025f96ec to 026f9737 has its CatchHandler @ 025f9814 */
    FUN_021f03f8(PTR_DAT_049c8848);
    FUN_021f03f8(PTR_DAT_049c8858);
    bRam0000000004f4bd39 = 1;
  }
  puVar4 = PTR_DAT_049c8858;
  puVar3 = PTR_DAT_049c8850;
  puVar1 = PTR_DAT_049b5fc8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar2;
  }
                    /* try { // try from 025f9738 to 026f974b has its CatchHandler @ 025f9328 */
                    /* try { // try from 025f974c to 026f9753 has its CatchHandler @ 025f980c */
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  CloudPrefsT___Il2CppFullySharedGenericStructType____ctor_2801f24
            (&uStack_60,*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),&uStack_28,
             *(undefined8 *)puVar3);
                    /* try { // try from 025f9770 to 026f9773 has its CatchHandler @ 025f97f8 */
  puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar6[4] = uStack_40;
  puVar6[1] = uStack_58;
  *puVar6 = uStack_60;
  puVar6[3] = uStack_48;
  puVar6[2] = uStack_50;
  thunk_FUN_021f190c(*(long *)(*(long *)puVar1 + 0xb8) + 8,0);
                    /* try { // try from 025f9798 to 026f97a3 has its CatchHandler @ 025f97f4 */
  return;
}

