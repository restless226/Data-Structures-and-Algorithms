cmake_minimum_required(VERSION 3.16)
project(untitled)


set(CMAKE_CXX_STANDARD 14)

add_executable(untitled algorithmic_toolbox/test.cpp
        calculator/calculator_II.cpp DSA_ASSIGNMENTS/arrays_practice/array_sorting.cpp DSA_ASSIGNMENTS/arrays_practice/array1.cpp
        DSA_ASSIGNMENTS/arrays_practice/arrays3.cpp DSA_ASSIGNMENTS/arrays_practice/array4.cpp DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp
        DSA_ASSIGNMENTS/arrays_practice/array3_1.cpp DSA_ASSIGNMENTS/arrays_practice/array4_1.cpp Basics/MATRIX/matrix.cpp
        DSA_ASSIGNMENTS/assignment_1/assignment_1_using_struct.cpp DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp
        DSA_ASSIGNMENTS/assignment_1/main_interface.cpp algorithmic_toolbox/sum1.cpp DSA_ASSIGNMENTS/arrays_practice/ass1.cpp
        DSA_ASSIGNMENTS/arrays_practice/ass1_again.cpp
        algorithmic_toolbox DM/linear_searrch.cpp
        DM/occurances.cpp DSA_ASSIGNMENTS/assignment_3_queue/circular_queue_2.cpp DSA_ASSIGNMENTS/assignment_3_queue/queue_final.cpp
        DM/DM_lists.cpp Basics/STL/vectors_tut.cpp Basics/Templates/templates.cpp
        stack_assignment stack_assignment/linkedlistwithstack.h Basics/algorithms/SORTING/selectionSort.cpp
        Basics/algorithms/SORTING/BubbleSort.cpp Basics/algorithms/SORTING/InsertionSort.cpp
        Basics/algorithms/SORTING/MergeSort.cpp Basics/algorithms/SORTING/QuickSort.cpp
        queue_again/queue_final.h queue_again/queue_impl.cpp queue_again/queue_main.cpp Basics/LinkedList/Single_LL/List.h
        Basics/LinkedList/Single_LL/List_impl.cpp Basics/LinkedList/Single_LL/list_main.cpp stack_2/stack_again.cpp
        Basics/LinkedList/Single_LL/LinkedList_again/LL._again.cpp Basics/LinkedList/Single_LL/LinkedList_again/LL_Final_code.cpp
        Basics/HackerRank/display_LL.cpp
        Basics/HackerRank/insert_at_tail.cpp Basics/HackerRank/insert_at_head.cpp
        Basics/HackerRank/insert_at_middle.cpp Basics/HackerRank/delete_a_node.cpp
        Basics/HackerRank/get_node_value.cpp Basics/HackerRank/reverse_LL.cpp
        Basics/GFG/LL/count_nodes.cpp Basics/GFG/LL/delete_without_head_pointer.cpp
        Basics/GFG/LL/occurance_in_LL.cpp Basics/LinkedList/Double_LL/double_LL.cpp
        Basics/GFG/LL/LL_length_even_or_odd.cpp Basics/GFG/LL/Count_Pairs_whose_sum_is_equal_to_X.cpp
        Basics/GFG/LL/Add_two_numbers_represented_by_Linked_List.cpp Basics/GFG/LL/Identical_LL.cpp
        Basics/GFG/LL/delete_alternate_nodes.cpp Basics/GFG/LL/Add_1_to_LL.cpp Basics/LinkedList/Circular_LL/Circular_LL.cpp
        Basics/GFG/LL/decimal_eq_of_binary_LL.cpp  Basics/GFG/LL/subtraction_in_LL.cpp Basics/queue/queue_code.cpp
        Basics/queue/circular_queue.cpp Basics/GFG/Queue/queue_using_array.cpp Basics/GFG/LL/find_middle_of_LL.cpp
        Basics/GFG/LL/insert_in_middle.cpp Basics/GFG/LL/node_at_given_index.cpp Basics/GFG/Queue/queue_push_and_pop.cpp
        Basics/GFG/Queue/STL_queue.cpp Basics/GFG/Queue/queue_reversal.cpp Basics/GFG/Arrays/fighting_darkness.cpp
        Basics/GFG/Arrays/check_array_equality.cpp Basics/GFG/Arrays/rotate_array.cpp
        Basics/GFG/Queue/queue_using_LL.cpp Basics/GFG/LL/sum_of_last_n_nodes.cpp
        Basics/GFG/LL/LL_insertion.cpp Basics/Stack/stack_code.cpp Basics/queue/queue_using_LL.cpp
        Basics/GFG/Queue/queue_using_two_stacks.cpp Basics/GFG/LL/Stack.cpp
        Basics/GFG/LL/linked_list_of_strings_forms_a_palindrome.cpp Basics/GFG/LL/compare_two_LL.cpp
        Basics/GFG/LL/sort_LL.cpp Basics/Stack/stack_using_LL.cpp Basics/Stack/Expression_conversions/infix_to_postfix.cpp
        Basics/Stack/Expression_conversions/infix_to_prefix.cpp Basics/Stack/Expression_conversions/postfix_to_infix.cpp Basics/Stack/Expression_conversions/prefix_to_infix.cpp
        DSA_mock_test.cpp ROUGH_FILES/rough2.cpp DSAL_mock/header.h DSAL_mock/impl.cpp DSAL_mock/main.cpp
        Basics/GFG/Stack/stack_designer.cpp Basics/GFG/Stack/stack_using_array.cpp
        Basics/GFG/Stack/pairwise_consecutive_elements.cpp Basics/GFG/Stack/immediate_smaller_element.cpp
        Basics/GFG/Stack/remove_repeated_digits.cpp Basics/GFG/Stack/delete_middle_element_of_stack.cpp
        Basics/GFG/Stack/stack_using_LL.cpp Basics/GFG/Stack/valid_substring.cpp
        Basics/GFG/Stack/special_stack.cpp Basics/GFG/Stack/print_bracket_no.cpp
        Basics/GFG/Stack/sorting_stack.cpp Basics/GFG/Stack/get_min_at_pop.cpp
        Basics/GFG/Stack/impl_two_stacks_in_array.cpp Basics/GFG/Queue/generate_binary_no.cpp
        Basics/GFG/Stack/reverse_a_string.cpp Basics/GFG/Stack/stack_using_two_queues.cpp
        Basics/BST/BST_impl.cpp Basics/GFG/searching/Count_zeros_in_a_sorted_matrix.cpp
        Basics/Templates/templates2.cpp Basics/Templates/function_templates.cpp
        Basics/Templates/overloading_templates.cpp Basics/STL/Lists.cpp Basics/STL/maps.cpp
        Basics/STL/function_objects.cpp
        DSA_ASSIGNMENTS/assignment_3_queue/queue.h DSA_ASSIGNMENTS/assignment_3_queue/main.cpp DSA_ASSIGNMENTS/assignment_3_queue/impl.cpp
        DSA_ASSIGNMENTS/assignment_1/studDB.h DSA_ASSIGNMENTS/assignment_1/studDB_impl.cpp DSA_ASSIGNMENTS/assignment_1/main_interface.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/mainFile.cpp DSA_ASSIGNMENTS/assignment_2_stack/stack_impl.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/Stack.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/Assignment4.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/ExpressionImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/StackHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/StackImplementation.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionHeader.h
        DSA_ASSIGNMENTS/assignment_4_exp_tree/TreeExpressionImplementation.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST.cpp DSA_ASSIGNMENTS/assignment_5_BST/BST.h DSA_ASSIGNMENTS/assignment_5_BST/BST_Main.cpp
        DSA_ASSIGNMENTS/assignment_2_stack/stack_final.cpp DSA_ASSIGNMENTS/assignment_4_exp_tree/exp_tree_final.cpp
        DSA_ASSIGNMENTS/assignment_5_BST/BST_final.cpp
        DSA_ASSIGNMENTS/assignment_7/assignment_7.cpp DSA_ASSIGNMENTS/assignment_8/assignment_8.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/tbt.h DSA_ASSIGNMENTS/assignment_6_TBT/tbt_impl.cpp DSA_ASSIGNMENTS/assignment_6_TBT/tbt_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_header.h
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_main.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/heap_impl.cpp
        DSA_ASSIGNMENTS/assignment_9_heap_sort/HEAP.cpp
        ROUGH_FILES/rough3.cpp Basics/graphs/MST_kruskal.cpp Basics/graphs/MST_Prim.cpp
        DSA_ASSIGNMENTS/assignment_10/assignment_10.cpp
        DSA_ASSIGNMENTS/assignment_7/mst_header.h DSA_ASSIGNMENTS/assignment_7/mst_impl.cpp DSA_ASSIGNMENTS/assignment_7/mst_main.cpp
        DSA_ASSIGNMENTS/assignment_8/dijk_header.h DSA_ASSIGNMENTS/assignment_8/dijk_impl.cpp DSA_ASSIGNMENTS/assignment_8/dijk_main.cpp
        DSA_ASSIGNMENTS/assignment_10/header.h DSA_ASSIGNMENTS/assignment_10/impl.cpp DSA_ASSIGNMENTS/assignment_10/main.cpp
        Basics/STL/hashing.cpp Basics/STL/sets.cpp
        DSA_ASSIGNMENTS/assignment_6_TBT/TBT_FINAL.cpp ROUGH_FILES/rough4.cpp ROUGH_FILES/rough5.cpp
        algorithmic_toolbox/week3/money_change.cpp
        algorithmic_toolbox/week3/max_loot.cpp
        algorithmic_toolbox/week3/car_fueling.cpp
        Basics/Templates/unordered_maps.cpp
        Basics/graphs/graph.cpp Basics/graphs/graph2.cpp Basics/graphs/MST_Prim2.cpp
        Basics/graphs/Djikstras.cpp Basics/dequeue/dequeue.cpp Basics/dequeue/deque2.cpp
        Basics/dequeue/deque3.cpp Basics/EXPONENTATION/mod_exp.cpp Basics/EXPONENTATION/matrix_exp.cpp Basics/STL/priority_queue.cpp
        ROUGH_FILES/rough1.cpp ROUGH_FILES/main.cpp
        Basics/Recursion/fib.cpp Basics/Recursion/array_sort.cpp
        Basics/Recursion/first_index.cpp Basics/Recursion/last_index.cpp
        Basics/Recursion/all_indices.cpp Basics/Recursion/find_char_arr_length.cpp
        Basics/SLIDING_WINDOW/FSSW/max_sum_subarray_size_k.cpp
        Basics/Trees_CN/tree_node.h Basics/Trees_CN/tree_use.cpp Basics/Binary_Trees_CN/binary_tree_node.h
        Basics/Binary_Trees_CN/binary_tree_use.cpp
        Basics/Binary_Trees_CN/binary_tree_main.cpp Basics/BST_CN/BST.h
        Basics/BST_CN/BST_use.cpp Basics/LinkedList_CN/LL_node.cpp Basics/LinkedList_CN/LL_node.h
        Basics/LinkedList_CN/LL_main.cpp Basics/TBT/TBT.h Basics/HEAP/heap.h
        Basics/HEAP/heap_use.cpp Basics/HEAP/heap_main.cpp
        Basics/GRAPHS_CN/grpahs_use.cpp Basics/GRAPHS_CN/kruskal.cpp Basics/GRAPHS_CN/Prim.cpp
        Basics/GRAPHS_CN/Dijikstras.cpp Basics/EXP_CONVERSIONS_AGAIN/infix_to_postfix.cpp
        Basics/EXP_CONVERSIONS_AGAIN/infix_to_prefix.cpp Basics/SORTING_ALGORITHMS_AGAIN/merge_sort.cpp
        Basics/SORTING_ALGORITHMS_AGAIN/quick_sort.cpp Basics/EXP_TREE/exp_tree_impl.cpp Basics/EXP_TREE/exp_tree.h
        Basics/EXP_TREE/exp_tree.h Basics/FILE_HANDLING/file_handling.cpp
        Basics/FILE_HANDLING/file_handling_2.cpp Basics/FILE_HANDLING/file_handling_FINAL.cpp
        Basics/DP/DP_CN/fib.cpp Basics/DP/DP_CN/min_steps.cpp Basics/DP/DP_CN/min_count.cpp
        DAA/file_handling.cpp DAA/merge_sort.cpp DAA/n_queens.cpp DAA/fractional_knapsack_using_greedy.cpp
        Basics/BACKTRACKING/n_queens.cpp Basics/BACKTRACKING/rat_in_a_maze.cpp
        Basics/BINARY_SEARCH/aggressive_cows.cpp DAA/knapsack_01.cpp
        Basics/DP/knapsack_01_variations/knapsack_01.cpp Basics/DP/knapsack_01_variations/subset_sum.cpp Basics/DP/knapsack_01_variations/equal_sum_partition.cpp
        Basics/DP/knapsack_01_variations/count_subsets_sum_with_given_sum.cpp Basics/DP/knapsack_01_variations/min_sum_partition.cpp
        Basics/DP/knapsack_01_variations/count_no_of_subsets_with_given_difference.cpp Basics/DP/knapsack_01_variations/target_sum.cpp
        Basics/DP/unbounded_knapsack/unbounded_knapsack_using_DP.cpp Basics/DP/unbounded_knapsack/rod_cutting.cpp
        Basics/DP/unbounded_knapsack/coin_change_one.cpp Basics/DP/unbounded_knapsack/coin_change_two.cpp
        Basics/DP/DP_LCS/lcs.cpp Basics/DP/DP_LCS/longest_common_substring.cpp
        Basics/DP/DP_LCS/scs.cpp Basics/DP/DP_LCS/min_no_of_insertions_deletions_to_convert_a_to_b.cpp
        Basics/DP/DP_LPS/lps.cpp Basics/DP/DP_LPS/min_deletions_to_make_palindrome.cpp
        Basics/DP/DP_LCS/lrs.cpp Basics/DP/DP_LCS/sequence_pattern_matching.cpp
        Basics/DP/DP_LPS/min_insertions_to_form_palindrome.cpp Basics/DP/DP_MCM/mcm.cpp
        Basics/DP/DP_LCS/edit_distance.cpp Basics/DP/DP_MCM/palindromic_partitioning.cpp
        Basics/DP/DP_MCM/boolean_parenthesization.cpp Basics/DP/DP_MCM/egg_dropping.cpp
        Basics/DP/DP_MCM/scrambled_string.cpp Basics/DP/DP_CN/get_min_squares.cpp Basics/DP/DP_CN/min_cost_path.cpp
        Basics/DP/DP_CN/max_cost_path.cpp Basics/SLIDING_WINDOW/FSSW/first_-ve_no_in_every_window_size_k.cpp
        Basics/SLIDING_WINDOW/FSSW/count_occurrance_of_anagrams.cpp Basics/SLIDING_WINDOW/FSSW/max_of_all_subarrays_of_size_k.cpp
        Basics/SLIDING_WINDOW/VSSW/largest_subarray_of_sum_K.cpp Basics/SLIDING_WINDOW/VSSW/subarray_with_given_sum.cpp
        Basics/SLIDING_WINDOW/VSSW/longest_substring_with_K_unique_characters.cpp
        Basics/SLIDING_WINDOW/VSSW/longest_substring_without_repeating_characters.cpp
        Basics/SLIDING_WINDOW/VSSW/pick_toys.cpp Basics/SLIDING_WINDOW/VSSW/min_window_substring.cpp
        Basics/DP/TECH_DOSE/lis.cpp Basics/DP/DP_CN/loot_houses.cpp Basics/DP/DP_CN/max_square_matrix_with_all_zeroes.cpp
        Basics/DP/DP_CN/sus.cpp Basics/DP/DP_CN/lus.cpp Basics/STACK_PROBLEMS/ngr.cpp
        Basics/STACK_PROBLEMS/ngl.cpp Basics/STACK_PROBLEMS/nsl.cpp
        Basics/STACK_PROBLEMS/nsr.cpp Basics/STACK_PROBLEMS/stock_span.cpp
        Basics/STACK_PROBLEMS/mah.cpp Basics/STACK_PROBLEMS/mar.cpp Basics/STACK_PROBLEMS/rwt.cpp
        Basics/STACK_PROBLEMS/celebrity.cpp Basics/DP/DP_LCS/lcs_of_3_strings.cpp
        Basics/DP/DP_CN/print_all_ss_of_a_string.cpp Basics/DP/DP_CN/string_ss.cpp Basics/DP/DP_CN/count_all_possible_paths.cpp
        Basics/DP/DP_CN/gold_mine.cpp Basics/DP/DP_CN/count_ways_to_reach_nth_stair.cpp
        Basics/DP/DP_CN/min_steps_to_dest.cpp Basics/DP/DP_CN/distinct_occurrences.cpp
        Basics/DP/DP_CN/min_no_of_jumps.cpp Basics/DP/DP_CN/count_no_of_substrings.cpp
        Basics/DP/TECH_DOSE/interleaved_strings.cpp Basics/DP/TECH_DOSE/msis.cpp
        Basics/DP/TECH_DOSE/box_stacking.cpp)


