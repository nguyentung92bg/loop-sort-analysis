/* IL2CPP: NakamaGiftsProvider.GrantHandler$$.ctor
void NakamaGiftsProvider_GrantHandler___ctor (NakamaGiftsProvider_GrantHandler_o* __this, System_Collections_Generic_Dictionary_string__Gift__o* giftsById, System_Action_Gift__o* grant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaGiftsProvider.GrantHandler$$.ctor
   void NakamaGiftsProvider_GrantHandler___ctor (NakamaGiftsProvider_GrantHandler_o* __this,
   System_Collections_Generic_Dictionary_string__Gift__o* giftsById, System_Action_Gift__o* grant,
   const MethodInfo* method); */

void NakamaGiftsProvider_GrantHandler___ctor_224a1c4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  System_Object___ctor_3142338(param_1,0);
                    /* try { // try from 0234a1e8 to 0244a1f7 has its CatchHandler @ 0234a26c */
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x10),param_2);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_3;
                    /* try { // try from 0234a1f8 to 0244a28f has its CatchHandler @ 0234a07c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

