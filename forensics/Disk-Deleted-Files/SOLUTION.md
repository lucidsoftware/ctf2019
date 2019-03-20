1. Use the ext3grep utilities “–dump-name” option to display a list of file names that were deleted from the 

ext3grep --dump-name final-disk

2. Restore the deleted files
ext3grep --restore-all final-disk

3. There should be folder created with the name 'RESTORED_FILES'

4. Flag.txt has your flag